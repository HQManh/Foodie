// rea decompile_all
// name: System.Runtime.Serialization.ObjectManager$$GetCompletionInfo
// address: 0x74aeec4
// body: available
// range: 0x74aeec4-0x74af15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74aefdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74af15c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Runtime_Serialization_ObjectManager__GetCompletionInfo
               (undefined8 param_1,long param_2,long *param_3,undefined8 *param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 local_28;
  
  if (param_2 == 0) goto LAB_074aefdc;
  *param_4 = *(undefined8 *)(param_2 + 0x18);
  thunk_FUN_03f5d7b8(param_4);
  lVar1 = System_Runtime_Serialization_ObjectManager__FindObjectHolder
                    (param_1,*(undefined8 *)(param_2 + 0x10));
  *param_3 = lVar1;
  thunk_FUN_03f5d7b8(param_3,lVar1);
  if (*param_3 == 0) goto LAB_074aefdc;
  uVar2 = System_Runtime_Serialization_ObjectHolder__get_CompletelyFixed(*param_3,0);
  lVar1 = *param_3;
  if ((uVar2 & 1) == 0) {
    if (lVar1 == 0) goto LAB_074aefdc;
    if (*(long **)(lVar1 + 0x10) != (long *)0x0) {
      lVar7 = **(long **)(lVar1 + 0x10);
      if ((*(byte *)(DAT_09535628 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09535628 + 0x130) * 8 + -8) ==
          DAT_09535628)) {
        plVar3 = (long *)System_Runtime_Serialization_ObjectManager__get_SpecialFixupObjects
                                   (param_1);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x178))(plVar3,*param_3,*(undefined8 *)(*plVar3 + 0x180));
          return false;
        }
        goto LAB_074aefdc;
      }
    }
LAB_074aef74:
    uVar2 = System_Runtime_Serialization_ObjectHolder__get_CanObjectValueChange(lVar1,0);
    if ((uVar2 & 1) != 0) goto LAB_074aef80;
    lVar1 = *param_3;
    if (lVar1 == 0) {
LAB_074aefdc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      return *(long *)(lVar1 + 0x10) != 0;
    }
    if ((param_5 & 1) == 0) {
      return false;
    }
  }
  else {
    if (lVar1 != 0) goto LAB_074aef74;
LAB_074aef80:
    if ((param_5 & 1) == 0) {
      return false;
    }
    lVar1 = *param_3;
    if (lVar1 == 0) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar4 = FUN_03f5c394(uVar4,1);
      FUN_039b1d98(param_2);
      local_28 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = FUN_03f5c42c(DAT_09535440,&local_28);
      FUN_039b1d98(uVar4);
      FUN_039b0da0(uVar4,uVar5);
      FUN_039af17c(uVar4,0,uVar5);
      puVar6 = &DAT_091faf78;
      goto LAB_074af118;
    }
  }
  uVar2 = System_Runtime_Serialization_ObjectHolder__get_IsIncompleteObjectReference(lVar1,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
  uVar4 = FUN_03f5c394(uVar4,1);
  FUN_039b1d98(param_2);
  local_28 = *(undefined8 *)(param_2 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar5 = FUN_03f5c42c(DAT_09535440,&local_28);
    FUN_039b1d98(uVar4);
    FUN_039b0da0(uVar4,uVar5);
    FUN_039af17c(uVar4,0,uVar5);
    puVar6 = &DAT_0920f9c8;
  }
  else {
    uVar5 = FUN_03f5c42c(DAT_09535440,&local_28);
    FUN_039b1d98(uVar4);
    FUN_039b0da0(uVar4,uVar5);
    FUN_039af17c(uVar4,0,uVar5);
    puVar6 = &DAT_0920f9c0;
  }
LAB_074af118:
  uVar5 = thunk_FUN_03fc39d4(puVar6);
  uVar4 = System_Environment__GetResourceString(uVar5,uVar4,0);
  thunk_FUN_03fc39d4(&DAT_0918a948);
  uVar5 = thunk_FUN_03f9944c();
  System_Runtime_Serialization_SerializationException___ctor(uVar5,uVar4);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d4f48);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

