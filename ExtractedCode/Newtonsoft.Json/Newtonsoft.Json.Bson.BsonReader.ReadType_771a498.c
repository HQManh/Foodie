// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonReader$$ReadType
// address: 0x771a498
// body: available
// range: 0x771a498-0x771aa77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771a660 to 0x764708c Newtonsoft.Json.JsonReader$$SetToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771a7c4 to 0x7645308 Newtonsoft.Json.JsonReader$$SetToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771aa70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771aa74 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Bson_BsonReader__ReadType(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  char local_54 [4];
  undefined1 local_50 [16];
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_095229ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918e990);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_091f9400);
    DAT_095229ec = 1;
  }
  auVar2._8_8_ = local_50._8_8_;
  auVar2._0_8_ = local_50._0_8_;
  local_54[0] = '\0';
  local_60 = 0;
  switch(param_2) {
  case 1:
    uVar7 = Newtonsoft_Json_Bson_BsonReader__ReadDouble(param_1);
    local_50._0_8_ = uVar7;
    uVar8 = DAT_09535458;
    if (*(int *)(param_1 + 0x5c) == 1) {
      local_70 = uVar7;
      uVar8 = FUN_03f5c42c(DAT_09535458,&local_70);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      local_50 = System_Convert__ToDecimal(uVar8,uVar9,0);
      uVar8 = DAT_091837d8;
    }
    uVar8 = FUN_03f5c42c(uVar8,local_50);
    uVar9 = 8;
    break;
  case 2:
  case 0xd:
  case 0xe:
    uVar8 = Newtonsoft_Json_Bson_BsonReader__ReadLengthString(param_1);
    goto LAB_0771a630;
  case 3:
    Newtonsoft_Json_JsonReader__SetToken(param_1,1,0);
    lVar6 = thunk_FUN_03f9944c(DAT_0918e990);
    System_Object___ctor(lVar6,0);
    uVar3 = 3;
    goto LAB_0771a7f8;
  case 4:
    Newtonsoft_Json_JsonReader__SetToken(param_1,2,0);
    lVar6 = thunk_FUN_03f9944c(DAT_0918e990);
    System_Object___ctor(lVar6,0);
    uVar3 = 4;
LAB_0771a7f8:
    *(undefined1 *)(lVar6 + 0x10) = uVar3;
    Newtonsoft_Json_Bson_BsonReader__PushContext(param_1,lVar6);
    uVar4 = Newtonsoft_Json_Bson_BsonReader__ReadInt32(param_1);
    *(undefined4 *)(lVar6 + 0x14) = uVar4;
    goto LAB_0771a9b0;
  case 5:
    uVar8 = Newtonsoft_Json_Bson_BsonReader__ReadBinary(param_1,local_54);
    if (local_54[0] == '\x04') {
      local_50._0_8_ = 0;
      local_50._8_8_ = 0;
      System_Guid___ctor(local_50,uVar8,0);
      uStack_68 = local_50._8_8_;
      local_70 = local_50._0_8_;
      uVar8 = FUN_03f5c42c(DAT_09184f30,&local_70);
    }
    uVar9 = 0x11;
    break;
  case 6:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar8 = 0xc;
LAB_0771a7b0:
      Newtonsoft_Json_JsonReader__SetToken(param_1,uVar8,0);
      return;
    }
    goto LAB_0771aa74;
  case 7:
    uVar8 = Newtonsoft_Json_Bson_BsonReader__ReadBytes(param_1,0xc);
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_0771aa74;
    uVar9 = 0x11;
    goto LAB_0771a64c;
  case 8:
    uVar4 = Newtonsoft_Json_Bson_BsonReader__ReadByte(param_1);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar3 = System_Convert__ToBoolean(uVar4,0);
    local_50._0_8_ = CONCAT71(local_50._1_7_,uVar3) & 0xffffffffffffff01;
    uVar8 = FUN_03f5c42c(DAT_09535400,local_50);
    uVar9 = 10;
    break;
  case 9:
    uVar8 = Newtonsoft_Json_Bson_BsonReader__ReadInt64(param_1);
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835c0);
    }
    uVar7 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertJavaScriptTicksToDateTime(uVar8,0);
    local_60 = uVar7;
    if (*(int *)(param_1 + 0xac) == 2) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_DateTime__ToLocalTime(&local_60,0);
    }
    else if (*(int *)(param_1 + 0xac) == 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_DateTime__SpecifyKind(uVar7,0,0);
    }
    local_50._0_8_ = uVar7;
    uVar8 = FUN_03f5c42c(DAT_09183548,local_50);
    uVar9 = 0x10;
    break;
  case 10:
    local_50 = auVar2;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar8 = 0xb;
      goto LAB_0771a7b0;
    }
    goto LAB_0771aa74;
  case 0xb:
    uVar8 = Newtonsoft_Json_Bson_BsonReader__ReadString(param_1);
    uVar9 = Newtonsoft_Json_Bson_BsonReader__ReadString(param_1);
    uVar8 = System_String__Concat(DAT_091f9400,uVar8,DAT_091f9400,uVar9,0);
LAB_0771a630:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar9 = 9;
LAB_0771a64c:
      Newtonsoft_Json_JsonReader__SetToken(param_1,uVar9,uVar8,0);
      return;
    }
    goto LAB_0771aa74;
  case 0xc:
    Newtonsoft_Json_JsonReader__SetToken(param_1,1,0);
    *(undefined4 *)(param_1 + 0x9c) = 1;
    goto LAB_0771a9b0;
  case 0xf:
    Newtonsoft_Json_JsonReader__SetToken(param_1,1,0);
    *(undefined4 *)(param_1 + 0x9c) = 4;
    goto LAB_0771a9b0;
  case 0x10:
    iVar5 = Newtonsoft_Json_Bson_BsonReader__ReadInt32(param_1);
    local_50._0_8_ = SEXT48(iVar5);
    goto LAB_0771a6e4;
  case 0x11:
  case 0x12:
    local_50._0_8_ = Newtonsoft_Json_Bson_BsonReader__ReadInt64(param_1);
LAB_0771a6e4:
    uVar8 = FUN_03f5c42c(DAT_09535440,local_50);
    uVar9 = 7;
    break;
  default:
    local_50._0_8_ = thunk_FUN_03fc39d4(&DAT_09182028);
    local_50._8_8_ = 0xffffffffffffffff;
    local_40 = param_2;
    uVar8 = System_Enum__ToString(local_50,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09211bc8);
    uVar8 = System_String__Concat(uVar9,uVar8,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar9 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_09224510);
    System_ArgumentOutOfRangeException___ctor(uVar9,uVar10,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091c41a8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,uVar8);
    }
    goto LAB_0771aa74;
  }
  Newtonsoft_Json_JsonReader__SetToken(param_1,uVar9,uVar8,0);
LAB_0771a9b0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0771aa74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

