// rea decompile_all
// name: Newtonsoft.Json.Linq.JValue.JValueDynamicProxy$$TryBinaryOperation
// address: 0x76f8988
// body: available
// range: 0x76f8988-0x76f8ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f8cc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JValue_JValueDynamicProxy__TryBinaryOperation
          (undefined8 param_1,long *param_2,long param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte extraout_var;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte local_48 [4];
  byte local_44 [4];
  byte local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  
  if ((DAT_09522904 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187278);
    DAT_09522904 = 1;
  }
  if (param_4 != (long *)0x0) {
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_4 + 0x130)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      param_4 = (long *)param_4[7];
    }
  }
  if (param_3 == 0) goto LAB_076f8cc8;
  uVar1 = *(uint *)(param_3 + 0x18);
  if ((int)uVar1 < 0x24) {
    if ((int)uVar1 < 0x16) {
      if ((int)uVar1 < 0xf) {
        if ((uVar1 == 0) || (uVar1 == 0xc)) goto LAB_076f8b64;
        if (uVar1 != 0xd) goto LAB_076f8c08;
        if (param_2 == (long *)0x0) goto LAB_076f8cc8;
        uVar5 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
        iVar2 = Newtonsoft_Json_Linq_JValue__Compare(uVar5,param_2[7],param_4);
        local_34[0] = iVar2 == 0;
        pbVar6 = local_34;
      }
      else if ((int)uVar1 < 0x14) {
        if (uVar1 == 0xf) {
          if (param_2 == (long *)0x0) goto LAB_076f8cc8;
          uVar5 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
          iVar2 = Newtonsoft_Json_Linq_JValue__Compare(uVar5,param_2[7],param_4);
          pbVar6 = local_3c;
          local_3c[0] = 0 < iVar2;
        }
        else {
          if (uVar1 != 0x10) goto LAB_076f8c08;
          if (param_2 == (long *)0x0) goto LAB_076f8cc8;
          uVar5 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
          Newtonsoft_Json_Linq_JValue__Compare(uVar5,param_2[7],param_4);
          pbVar6 = local_40;
          local_40[0] = (byte)~extraout_var >> 7;
        }
      }
      else if (uVar1 == 0x14) {
        if (param_2 == (long *)0x0) goto LAB_076f8cc8;
        uVar5 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
        uVar4 = Newtonsoft_Json_Linq_JValue__Compare(uVar5,param_2[7],param_4);
        local_44[0] = (byte)(uVar4 >> 0x1f) & 1;
        pbVar6 = local_44;
      }
      else {
        if (uVar1 != 0x15) goto LAB_076f8c08;
        if (param_2 == (long *)0x0) goto LAB_076f8cc8;
        uVar5 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
        iVar2 = Newtonsoft_Json_Linq_JValue__Compare(uVar5,param_2[7],param_4);
        pbVar6 = local_48;
        local_48[0] = iVar2 < 1;
      }
    }
    else {
      if (uVar1 == 0x1a) goto LAB_076f8b64;
      if (uVar1 != 0x23) goto LAB_076f8c08;
      if (param_2 == (long *)0x0) goto LAB_076f8cc8;
      uVar5 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
      iVar2 = Newtonsoft_Json_Linq_JValue__Compare(uVar5,param_2[7],param_4);
      local_38[0] = iVar2 != 0;
      pbVar6 = local_38;
    }
    uVar5 = FUN_03f5c42c(DAT_09535400,pbVar6);
    *param_5 = uVar5;
LAB_076f8cac:
    thunk_FUN_03f5d7b8(param_5,uVar5);
    uVar5 = 1;
  }
  else {
    if (uVar1 < 0x40) {
      if ((uVar1 == 0x2a) || (uVar1 == 0x3f)) goto LAB_076f8b64;
    }
    else if ((uVar1 - 0x41 < 9) && ((1 << (ulong)(uVar1 - 0x41 & 0x1f) & 0x111U) != 0)) {
LAB_076f8b64:
      if (param_2 == (long *)0x0) {
LAB_076f8cc8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = Newtonsoft_Json_Linq_JValue__Operation(uVar1,param_2[7],param_4,param_5);
      if ((uVar4 & 1) != 0) {
        uVar7 = *param_5;
        uVar5 = thunk_FUN_03f9944c(DAT_09187278);
        uVar3 = Newtonsoft_Json_Linq_JValue__GetValueType(0,uVar7);
        Newtonsoft_Json_Linq_JValue___ctor(uVar5,uVar7,uVar3);
        *param_5 = uVar5;
        goto LAB_076f8cac;
      }
    }
LAB_076f8c08:
    *param_5 = 0;
    thunk_FUN_03f5d7b8(param_5,0);
    uVar5 = 0;
  }
  return uVar5;
}

