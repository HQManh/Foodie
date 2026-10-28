// rea decompile_all
// name: System.Runtime.Serialization.ObjectManager$$DoFixups
// address: 0x74b0dc8
// body: available
// range: 0x74b0dc8-0x74b10e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b0f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b1038 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b1054 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_ObjectManager__DoFixups(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_28;
  
  if ((DAT_09521418 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c290);
    DAT_09521418 = 1;
  }
  do {
    lVar4 = System_Runtime_Serialization_ObjectManager__get_SpecialFixupObjects(param_1);
    if ((lVar4 == 0) ||
       (lVar4 = System_Runtime_Serialization_ObjectHolderList__GetFixupEnumerator(lVar4,0),
       lVar4 == 0)) goto LAB_074b0f38;
    iVar3 = 0;
    while (uVar5 = System_Runtime_Serialization_ObjectHolderListEnumerator__MoveNext(lVar4,0),
          (uVar5 & 1) != 0) {
      lVar6 = System_Runtime_Serialization_ObjectHolderListEnumerator__get_Current(lVar4,0);
      if (lVar6 == 0) goto LAB_074b0f38;
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar7 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar7,1);
        FUN_039b1d98(lVar6);
        local_28 = *(undefined8 *)(lVar6 + 0x18);
        uVar8 = FUN_03f5c42c(DAT_09535440,&local_28);
        FUN_039b1d98(uVar7);
        FUN_039b0da0(uVar7,uVar8);
        FUN_039af17c(uVar7,0,uVar8);
        uVar8 = thunk_FUN_03fc39d4(&DAT_0920f9c8);
        goto LAB_074b0ffc;
      }
      iVar1 = System_Runtime_Serialization_ObjectHolder__get_TotalDependentObjects(lVar6,0);
      if (iVar1 == 0) {
        uVar5 = System_Runtime_Serialization_ObjectHolder__get_RequiresSerInfoFixup(lVar6,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = System_Runtime_Serialization_ObjectHolder__get_IsIncompleteObjectReference
                            (lVar6,0);
          if ((uVar5 & 1) == 0) {
            System_Runtime_Serialization_ObjectManager__CompleteObject(param_1,lVar6,1);
          }
        }
        else {
          System_Runtime_Serialization_ObjectManager__FixupSpecialObject(param_1,lVar6);
          iVar3 = iVar3 + 1;
        }
        uVar5 = System_Runtime_Serialization_ObjectHolder__get_IsIncompleteObjectReference(lVar6,0);
        if ((uVar5 & 1) != 0) {
          uVar2 = System_Runtime_Serialization_ObjectManager__ResolveObjectReference(param_1,lVar6);
          iVar3 = iVar3 + (uVar2 & 1);
        }
      }
    }
  } while (iVar3 != 0);
  if (*(long *)(param_1 + 0x38) == 0) {
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      lVar4 = **(long **)(param_1 + 0x28);
      if ((*(byte *)(DAT_0918c290 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_0918c290 + 0x130) * 8 + -8) ==
          DAT_0918c290)) {
        uVar7 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar7,1);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        uVar8 = thunk_FUN_03fc39d4(&DAT_0918c290);
        FUN_039bb5f0(uVar9,uVar8);
        FUN_039b1d98();
        uVar8 = thunk_FUN_03fc39d4(&DAT_0918c290);
        lVar4 = FUN_039bb5f0(uVar9,uVar8);
        uVar8 = *(undefined8 *)(lVar4 + 0x10);
        FUN_039b1d98(uVar7);
        FUN_039b0da0(uVar7,uVar8);
        FUN_039af17c(uVar7,0,uVar8);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09211a90);
LAB_074b0ffc:
        uVar7 = System_Environment__GetResourceString(uVar8,uVar7,0);
LAB_074b1004:
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar8 = thunk_FUN_03f9944c();
        System_Runtime_Serialization_SerializationException___ctor(uVar8,uVar7);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091d4f38);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar7);
      }
    }
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    uVar5 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar5) {
        uVar7 = thunk_FUN_03fc39d4(&DAT_0920eea0);
        uVar7 = System_Environment__GetResourceString(uVar7,0);
        goto LAB_074b1004;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
      if (lVar4 != 0) {
        do {
          iVar3 = System_Runtime_Serialization_ObjectHolder__get_TotalDependentObjects(lVar4,0);
          if (0 < iVar3) {
            System_Runtime_Serialization_ObjectManager__CompleteObject(param_1,lVar4,1);
          }
          lVar4 = *(long *)(lVar4 + 0x48);
        } while (lVar4 != 0);
        if (*(long *)(param_1 + 0x38) == 0) {
          return;
        }
      }
      lVar4 = *(long *)(param_1 + 0x20);
      uVar5 = uVar5 + 1;
    } while (lVar4 != 0);
  }
LAB_074b0f38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

