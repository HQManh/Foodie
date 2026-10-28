// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CollectKey
// address: 0x444c6d0
// body: available
// range: 0x444c6d0-0x444c887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444c880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444c884 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__CollectKey(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined1 auStack_74 [12];
  ulong local_68;
  int local_5c;
  char local_58;
  int local_54;
  
  if ((DAT_0951806e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cb30);
    FUN_03f5c2a4(&DAT_0919cb38);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    DAT_0951806e = 1;
  }
  lVar7 = *(long *)(param_1 + 0x90);
  local_54 = 0;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      lVar4 = 0;
      iVar3 = 0x7fffffff;
      do {
        if (uVar1 <= uVar8) {
LAB_0444c884:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(lVar7 + uVar8 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_0444c880;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar10 = 0;
          lVar5 = lVar4;
          do {
            if (uVar1 <= uVar10) goto LAB_0444c884;
            lVar6 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_0444c880;
            lVar4 = lVar5;
            iVar2 = iVar3;
            if ((((*(int *)(lVar6 + 0x10) == 4) &&
                 (CookingGraph_CookingLevelSimulation__ResolveGridEffect(auStack_74,param_1,lVar6),
                 (local_68 & 0xff) != 0)) && ((int)(local_68 >> 0x20) == param_2)) &&
               ((local_58 == '\0' &&
                (lVar4 = lVar6, iVar2 = local_5c, lVar5 != 0 && iVar3 <= local_5c)))) {
              lVar4 = lVar5;
              iVar2 = iVar3;
            }
            iVar3 = iVar2;
            uVar1 = *(uint *)(lVar9 + 0x18);
            uVar10 = uVar10 + 1;
            lVar5 = lVar4;
          } while ((int)uVar10 < (int)uVar1);
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
      if (lVar4 != 0) {
        lVar7 = *(long *)(param_1 + 0xe0);
        if (lVar7 == 0) goto LAB_0444c880;
        uVar8 = FUN_06fcbf70(lVar7,lVar4,&local_54,DAT_0919cb30);
        iVar3 = 1;
        if ((uVar8 & 1) != 0) {
          iVar3 = local_54 + 1;
        }
        FUN_06fca434(lVar7,lVar4,iVar3,DAT_0919cb38);
      }
    }
    return;
  }
LAB_0444c880:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

