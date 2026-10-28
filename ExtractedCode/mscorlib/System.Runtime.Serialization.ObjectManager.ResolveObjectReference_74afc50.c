// rea decompile_all
// name: System.Runtime.Serialization.ObjectManager$$ResolveObjectReference
// address: 0x74afc50
// body: available
// range: 0x74afc50-0x74afe47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74afdd4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74afdd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74afde4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74afe40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74afe44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Serialization_ObjectManager__ResolveObjectReference(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  
  if ((DAT_09521411 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091861a0);
    DAT_09521411 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar12 = 0;
  lVar8 = *(long *)(param_2 + 0x10);
  do {
    lVar9 = DAT_091861a0;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    lVar4 = thunk_FUN_03f99350(lVar8,DAT_091861a0);
    lVar2 = DAT_091861a0;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar8,lVar9);
    }
    plVar5 = (long *)thunk_FUN_03f99350(lVar8,DAT_091861a0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar8,lVar2);
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_074afd20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,lVar2,0);
LAB_074afd20:
    uVar7 = (*(code *)*puVar6)(plVar5,uVar7,uVar1,puVar6[1]);
    System_Runtime_Serialization_ObjectHolder__SetObjectValue(param_2,uVar7,param_1,0);
    if (*(long *)(param_2 + 0x10) == 0) {
      System_Runtime_Serialization_ObjectHolder__SetObjectValue(param_2,lVar8,param_1,0);
      return 0;
    }
    if (iVar12 == 100) {
      uVar7 = thunk_FUN_03fc39d4(&DAT_0920f698);
      uVar7 = System_Environment__GetResourceString(uVar7,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      lVar8 = thunk_FUN_03f9944c();
      System_SystemException___ctor(lVar8,uVar7,0);
      *(undefined4 *)(lVar8 + 0x60) = 0x8013150c;
      uVar7 = thunk_FUN_03fc39d4(&DAT_091d4f88);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(lVar8,uVar7);
    }
    lVar9 = thunk_FUN_03f99350(*(long *)(param_2 + 0x10),DAT_091861a0);
    if (lVar9 == 0) break;
    iVar12 = iVar12 + 1;
    bVar3 = lVar8 != *(long *)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x10);
  } while (bVar3);
  System_Runtime_Serialization_ObjectHolder__set_IsIncompleteObjectReference(param_2,0,0);
  System_Runtime_Serialization_ObjectManager__DoNewlyRegisteredObjectFixups(param_1,param_2);
  return 1;
}

