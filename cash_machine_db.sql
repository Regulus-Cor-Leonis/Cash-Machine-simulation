USE [master]
GO
/****** Object:  Database [CashMachine]    Script Date: 29.06.2022 13:14:05 ******/
CREATE DATABASE [CashMachine]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'CashMachine', FILENAME = N'D:\SQL3\MSSQL15.MSSQLSERVER\MSSQL\DATA\CashMachine.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'CashMachine_log', FILENAME = N'D:\SQL3\MSSQL15.MSSQLSERVER\MSSQL\DATA\CashMachine_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT
GO
ALTER DATABASE [CashMachine] SET COMPATIBILITY_LEVEL = 150
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [CashMachine].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [CashMachine] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [CashMachine] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [CashMachine] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [CashMachine] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [CashMachine] SET ARITHABORT OFF 
GO
ALTER DATABASE [CashMachine] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [CashMachine] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [CashMachine] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [CashMachine] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [CashMachine] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [CashMachine] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [CashMachine] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [CashMachine] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [CashMachine] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [CashMachine] SET  DISABLE_BROKER 
GO
ALTER DATABASE [CashMachine] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [CashMachine] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [CashMachine] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [CashMachine] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [CashMachine] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [CashMachine] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [CashMachine] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [CashMachine] SET RECOVERY FULL 
GO
ALTER DATABASE [CashMachine] SET  MULTI_USER 
GO
ALTER DATABASE [CashMachine] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [CashMachine] SET DB_CHAINING OFF 
GO
ALTER DATABASE [CashMachine] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [CashMachine] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [CashMachine] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [CashMachine] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
EXEC sys.sp_db_vardecimal_storage_format N'CashMachine', N'ON'
GO
ALTER DATABASE [CashMachine] SET QUERY_STORE = OFF
GO
USE [CashMachine]
GO
/****** Object:  Table [dbo].[Bill]    Script Date: 29.06.2022 13:14:05 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Bill](
	[bill_id] [int] IDENTITY(1,1) NOT NULL,
	[value] [int] NOT NULL,
	[count] [int] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[bill_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[Bill] ON 

INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (1, 337, 20)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (2, 52, 9)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (3, 72, 10)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (4, 12, 6)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (5, 66, 8)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (6, 26, 7)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (7, 927, 5)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (8, 364, 9)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (9, 578, 5)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (10, 28, 1)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (11, 294, 7)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (12, 744, 8)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (13, 613, 88)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (14, 850, 25)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (15, 5, 110)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (16, 456, 54)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (17, 98, 876)
INSERT [dbo].[Bill] ([bill_id], [value], [count]) VALUES (18, 819, 14)
SET IDENTITY_INSERT [dbo].[Bill] OFF
GO
/****** Object:  Index [UQ__Bill__40BBEA3AA1512CB2]    Script Date: 29.06.2022 13:14:05 ******/
ALTER TABLE [dbo].[Bill] ADD UNIQUE NONCLUSTERED 
(
	[value] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, SORT_IN_TEMPDB = OFF, IGNORE_DUP_KEY = OFF, ONLINE = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
GO
USE [master]
GO
ALTER DATABASE [CashMachine] SET  READ_WRITE 
GO
