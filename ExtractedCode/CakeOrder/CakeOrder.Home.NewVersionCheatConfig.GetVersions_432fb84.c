// rea decompile_all
// name: CakeOrder.Home.NewVersionCheatConfig$$GetVersions
// address: 0x432fb84
// body: available
// range: 0x432fb84-0x432fd8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432fd88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432fd8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Home_NewVersionCheatConfig__GetVersions(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  
  if ((DAT_095176c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091887a0);
    FUN_03f5c2a4(&DAT_091f97b0);
    DAT_095176c9 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar2,DAT_091b0558);
  uVar3 = DAT_091f97b0;
  lVar8 = DAT_091b0570;
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar2,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(DAT_091887a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = **(long **)(DAT_091887a0 + 0xb8);
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar9 = 0;
          do {
            if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar7 = *(long **)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_0432fd88;
            uVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
            uVar4 = FUN_057e1004(lVar2,uVar3,DAT_091b0590);
            if ((uVar4 & 1) == 0) {
              uVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
              lVar5 = DAT_091b0570;
              lVar6 = *(long *)(lVar2 + 0x10);
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              if (lVar6 == 0) goto LAB_0432fd88;
              uVar1 = *(uint *)(lVar2 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar2,uVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar1);
        }
        return lVar2;
      }
    }
  }
LAB_0432fd88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

