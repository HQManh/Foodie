// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Preservable
// address: 0x4460338
// body: available
// range: 0x4460338-0x44604cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44604c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44604cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation__Preservable(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_0951803e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9548);
    FUN_03f5c2a4(&DAT_09179360);
    FUN_03f5c2a4(&DAT_091e77f8);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951803e = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    iVar1 = CookingGraph_CookingGraphIndex__Uses(*(long *)(param_1 + 0x78),param_2,0);
    if (iVar1 != 1) {
      return false;
    }
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x28), lVar3 != 0)) {
      if (*(uint *)(lVar3 + 0x18) <= param_2) {
LAB_044604cc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar6 = *(undefined8 *)(lVar3 + (long)(int)param_2 * 8 + 0x20);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar3 = puVar4[0x7d];
      if (lVar3 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar7 = *puVar4;
        lVar3 = thunk_FUN_03f9944c(DAT_09179360);
        FUN_05322d94(lVar3,uVar7,DAT_091e77f8,0);
        lVar5 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar5 + 1000) = lVar3;
        thunk_FUN_03f5d7b8(lVar5 + 1000,lVar3);
      }
      uVar2 = FUN_04ab6f28(uVar6,lVar3,DAT_091c9548);
      if ((uVar2 & 1) != 0) {
        return false;
      }
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x50), lVar3 != 0)) {
        if (*(uint *)(lVar3 + 0x18) <= param_2) goto LAB_044604cc;
        lVar3 = *(long *)(lVar3 + (long)(int)param_2 * 8 + 0x20);
        if (lVar3 != 0) {
          return *(int *)(lVar3 + 0x18) != 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

