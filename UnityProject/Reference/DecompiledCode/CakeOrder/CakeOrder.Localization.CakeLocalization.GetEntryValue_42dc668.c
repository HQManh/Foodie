// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization$$GetEntryValue
// address: 0x42dc668
// body: available
// range: 0x42dc668-0x42dc873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42dc870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Localization_CakeLocalization__GetEntryValue
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09517417 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_0919bfd0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091897e0);
    FUN_03f5c2a4(&DAT_0918b890);
    DAT_09517417 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_3,0,0);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    plVar3 = (long *)UnityEngine_Localization_Settings_LocalizationSettings__get_StringDatabase(0);
    if (*(int *)(DAT_0918b890 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918b890);
    }
    uVar2 = UnityEngine_Localization_Tables_TableReference__op_Implicit(&local_70,param_1,0);
    if (plVar3 == (long *)0x0) {
LAB_042dc870:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2);
    }
    uStack_48 = uStack_68;
    local_50 = local_70;
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    lVar4 = (**(code **)(*plVar3 + 0x1d8))
                      (plVar3,&local_50,param_3,*(undefined8 *)(*plVar3 + 0x1e0));
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    uVar2 = 0;
    if ((uVar1 & 1) != 0) {
      if (lVar4 == 0) goto LAB_042dc870;
      lVar4 = FUN_06e19c14(lVar4,param_2,DAT_0919bfd0);
      uVar2 = 0;
      if (lVar4 != 0) {
        uVar2 = UnityEngine_Localization_Tables_StringTableEntry__get_Value(lVar4,0);
        uVar1 = System_String__IsNullOrEmpty(uVar2,0);
        uVar2 = 0;
        if ((uVar1 & 1) == 0) {
          if (param_3 != (long *)0x0) {
            if ((*(byte *)(DAT_091897e0 + 0x130) <= *(byte *)(*param_3 + 0x130)) &&
               (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_091897e0 + 0x130) * 8 +
                         -8) == DAT_091897e0)) {
              uVar2 = UnityEngine_Localization_Tables_StringTableEntry__get_Value(lVar4,0);
              if (*(int *)(DAT_09182278 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182278);
              }
              uVar2 = CakeOrder_Localization_CakeLocalization__Pseudo(param_3,uVar2);
              return uVar2;
            }
          }
          uVar2 = UnityEngine_Localization_Tables_StringTableEntry__get_Value(lVar4,0);
        }
      }
    }
  }
  return uVar2;
}

