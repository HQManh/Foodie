// rea decompile_all
// name: System.Resources.ResourceReader$$CompareStringEqualsName
// address: 0x74dac34
// body: available
// range: 0x74dac34-0x74dae2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dadc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dae10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Resources_ResourceReader__CompareStringEqualsName(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  
  if ((DAT_0952157a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091844d8);
    DAT_0952157a = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = System_IO_BinaryReader__Read7BitEncodedInt(*(long *)(param_1 + 0x10),0);
    if ((int)uVar2 < 0) {
      puVar8 = &DAT_091ff338;
LAB_074dadcc:
      uVar4 = thunk_FUN_03fc39d4(puVar8);
      uVar4 = System_Environment__GetResourceString(uVar4,0);
      thunk_FUN_03fc39d4(&DAT_091819f8);
      uVar7 = thunk_FUN_03f9944c();
      System_BadImageFormatException___ctor(uVar7,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091d7cb0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar4);
    }
    if (*(long *)(param_1 + 0x70) == 0) {
      uVar4 = FUN_03f5c394(DAT_0917fc88,uVar2);
      uVar1 = uVar2;
      if (uVar2 != 0) {
        do {
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 == (long *)0x0) goto LAB_074dadc0;
          iVar3 = (**(code **)(*plVar9 + 0x2b8))
                            (plVar9,uVar4,uVar2 - uVar1,uVar1,*(undefined8 *)(*plVar9 + 0x2c0));
          if (iVar3 == 0) {
            puVar8 = &DAT_091ff310;
            goto LAB_074dadcc;
          }
          uVar1 = uVar1 - iVar3;
        } while (0 < (int)uVar1);
      }
      if (*(int *)(DAT_091844d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = System_Resources_FastResourceComparer__CompareOrdinal(uVar4,uVar2 >> 1,param_2);
LAB_074dada4:
      return iVar3 == 0;
    }
    uVar4 = System_IO_UnmanagedMemoryStream__get_PositionPointer(*(long *)(param_1 + 0x70),0);
    plVar9 = *(long **)(param_1 + 0x70);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x348))(plVar9,uVar2,1,*(undefined8 *)(*plVar9 + 0x350));
      plVar9 = *(long **)(param_1 + 0x70);
      if (plVar9 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
        plVar9 = *(long **)(param_1 + 0x70);
        if (plVar9 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
          if (lVar6 < lVar5) {
            puVar8 = &DAT_091ff328;
            goto LAB_074dadcc;
          }
          if (*(int *)(DAT_091844d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = System_Resources_FastResourceComparer__CompareOrdinal(uVar4,uVar2,param_2);
          goto LAB_074dada4;
        }
      }
    }
  }
LAB_074dadc0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

