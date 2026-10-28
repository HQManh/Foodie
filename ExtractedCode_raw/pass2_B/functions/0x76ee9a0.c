// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$ToObject
// address: 0x76ee9a0
// body: available
// range: 0x76ee9a0-0x76ef443 inclusive
// range: 0x76ef5d0-0x76ef5d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ef440 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ef5d0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JToken__ToObject(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  char local_84 [4];
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522892 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09187278);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0917dc48);
    FUN_03f5c2a4(&DAT_0917dc70);
    FUN_03f5c2a4(&DAT_0917dc88);
    FUN_03f5c2a4(&DAT_0917dca0);
    FUN_03f5c2a4(&DAT_0917dc18);
    FUN_03f5c2a4(&DAT_0917dc40);
    FUN_03f5c2a4(&DAT_0917dc78);
    FUN_03f5c2a4(&DAT_0917dc60);
    FUN_03f5c2a4(&DAT_0917dcb0);
    FUN_03f5c2a4(&DAT_0917dc20);
    FUN_03f5c2a4(&DAT_0917dc98);
    FUN_03f5c2a4(&DAT_0917dc80);
    FUN_03f5c2a4(&DAT_0917dcb8);
    FUN_03f5c2a4(&DAT_0917dc30);
    FUN_03f5c2a4(&DAT_0917dca8);
    FUN_03f5c2a4(&DAT_0917dc38);
    FUN_03f5c2a4(&DAT_0917dc28);
    FUN_03f5c2a4(&DAT_0917dcc0);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09522892 = 1;
  }
  local_84[0] = '\0';
  if (*(int *)(DAT_09187300 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095223c6 == '\0') {
    FUN_03f5c2a4(&DAT_09187300);
    DAT_095223c6 = '\x01';
  }
  if (*(int *)(DAT_09187300 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09187300 + 0xb8) != 0) {
switchD_076eecd4_default:
    uVar6 = Newtonsoft_Json_JsonSerializer__CreateDefault(0);
    Newtonsoft_Json_Linq_JToken__ToObject(param_1,param_2,uVar6);
    goto LAB_076ef404;
  }
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = Newtonsoft_Json_Utilities_ConvertUtils__GetTypeCode(param_2,local_84,0);
  if (local_84[0] != '\0') {
    iVar5 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    if (iVar5 == 8) {
      uVar6 = Newtonsoft_Json_JsonSerializer__CreateDefault(0);
      Newtonsoft_Json_Linq_JToken__ToObject(param_1,param_2,uVar6);
    }
    else {
      iVar5 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
      if (iVar5 != 6) goto LAB_076eecb4;
      uVar7 = Newtonsoft_Json_Utilities_TypeExtensions__IsEnum(param_2,0);
      if ((uVar7 & 1) == 0) {
        param_2 = System_Nullable__GetUnderlyingType(param_2,0);
      }
      if ((*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_09187278 + 0x130)) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) !=
          DAT_09187278)) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_1);
        }
        goto LAB_076ef5d0;
      }
      lVar9 = param_1[7];
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Enum__ToObject(param_2,lVar9,0);
    }
    goto LAB_076ef404;
  }
LAB_076eecb4:
  switch(uVar4) {
  case 2:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_09535460;
    goto LAB_076ef25c;
  case 3:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60._0_4_ = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc30;
    goto LAB_076ef068;
  case 4:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    local_60._0_8_ = CONCAT71(local_60._1_7_,uVar2) & 0xffffffffffffff01;
    uVar6 = DAT_09535400;
    goto LAB_076ef2f4;
  case 5:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc20;
    goto LAB_076ef194;
  case 6:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_09535408;
    goto LAB_076eeef8;
  case 7:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc98;
    goto LAB_076ef194;
  case 8:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_09535410;
    goto LAB_076ef25c;
  case 9:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60._0_4_ = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc78;
    goto LAB_076ef068;
  case 10:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_09535418;
    goto LAB_076ef25c;
  case 0xb:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60._0_4_ = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dcb0;
LAB_076ef068:
    uVar6 = *puVar8;
LAB_076ef228:
    goto LAB_076ef3f8;
  case 0xc:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60._0_4_ = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_09535420;
    goto LAB_076ef228;
  case 0xd:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc80;
    goto LAB_076ef2b8;
  case 0xe:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_095353f0;
LAB_076eeef8:
    local_60[0] = uVar2;
    goto LAB_076ef3f8;
  case 0xf:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc28;
LAB_076ef194:
    uVar6 = *puVar8;
LAB_076ef25c:
    local_60._0_2_ = uVar3;
    goto LAB_076ef3f8;
  case 0x10:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60._0_4_ = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_09535428;
    goto LAB_076ef228;
  case 0x11:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dcb8;
    goto LAB_076ef2b8;
  case 0x12:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    local_60._0_8_ = uVar6;
    uVar6 = DAT_09535440;
    goto LAB_076ef3f8;
  case 0x13:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc88;
    break;
  case 0x14:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    local_60._0_8_ = uVar6;
    uVar6 = DAT_09535448;
    goto LAB_076ef3f8;
  case 0x15:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dcc0;
    break;
  case 0x16:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60._0_4_ = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_09535450;
    goto LAB_076ef2f4;
  case 0x17:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dca0;
    goto LAB_076ef2b8;
  case 0x18:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60._0_8_ = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    uVar6 = DAT_09535458;
LAB_076ef2f4:
    puVar8 = (undefined8 *)local_60;
    goto LAB_076ef400;
  case 0x19:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc60;
    break;
  case 0x1a:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_09183548;
    goto LAB_076ef2b8;
  case 0x1b:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dc38;
    break;
  case 0x1c:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_09183590;
    break;
  case 0x1d:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__op_Explicit(local_60,param_1);
    puVar8 = &DAT_0917dc40;
    goto LAB_076ef3b0;
  case 0x1e:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_091837d8;
    break;
  case 0x1f:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__op_Explicit(local_60,param_1);
    puVar8 = &DAT_0917dc48;
    goto LAB_076ef3b0;
  case 0x20:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_09184f30;
    break;
  case 0x21:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__op_Explicit(local_60,param_1);
    local_70 = CONCAT44(local_70._4_4_,local_50);
    uVar6 = DAT_0917dc70;
    goto LAB_076ef3c0;
  case 0x22:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0918bd60;
LAB_076ef2b8:
    local_60._0_8_ = uVar6;
    uVar6 = *puVar8;
    goto LAB_076ef3f8;
  case 0x23:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    puVar8 = &DAT_0917dca8;
    break;
  case 0x24:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Newtonsoft_Json_Linq_JToken__ToBigInteger(param_1);
    puVar8 = &DAT_09181b78;
    break;
  case 0x25:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__ToBigIntegerNullable(local_60,param_1);
    puVar8 = &DAT_0917dc18;
LAB_076ef3b0:
    local_70 = CONCAT44(uStack_4c,local_50);
    uVar6 = *puVar8;
LAB_076ef3c0:
    puVar8 = local_80;
    goto LAB_076ef400;
  case 0x26:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    goto LAB_076ef404;
  case 0x27:
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__op_Explicit(param_1);
    goto LAB_076ef404;
  default:
    goto switchD_076eecd4_default;
  }
  uVar6 = *puVar8;
LAB_076ef3f8:
  puVar8 = (undefined8 *)local_60;
LAB_076ef400:
  FUN_03f5c42c(uVar6,puVar8);
LAB_076ef404:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_076ef5d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

