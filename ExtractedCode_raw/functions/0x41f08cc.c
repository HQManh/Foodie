// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$GetAppliedGridEffects
// address: 0x41f08cc
// body: available
// range: 0x41f08cc-0x41f0a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f0a68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f0a6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_LevelInfo__GetAppliedGridEffects(void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((DAT_09516b6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acfa8);
    FUN_03f5c2a4(&DAT_091acfb0);
    FUN_03f5c2a4(&DAT_091acfa0);
    FUN_03f5c2a4(&DAT_0917c268);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b6f = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0917c268);
  FUN_0579924c(lVar4,DAT_091acfa0);
  lVar5 = AnhPD_FoodOrder_LevelInfo__get_InitData();
  if (lVar5 != 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x80);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar5 + 0x80) == 0) {
LAB_041f0a6c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x80) + 0x20);
      if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
        uVar6 = 0;
        uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar10 = *(long *)(lVar5 + 0x20 + uVar6 * 8);
          if ((lVar10 != 0) && (*(int *)(lVar10 + 0x10) != 0)) {
            if (lVar4 == 0) goto LAB_041f0a6c;
            uVar7 = FUN_05799e5c(lVar4,*(int *)(lVar10 + 0x10),DAT_091acfb0);
            lVar3 = DAT_091acfa8;
            if ((uVar7 & 1) == 0) {
              lVar8 = *(long *)(lVar4 + 0x10);
              uVar1 = *(undefined4 *)(lVar10 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_041f0a6c;
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
              }
              else {
                FUN_05799adc(lVar4,uVar1,
                             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
  }
  return lVar4;
}

