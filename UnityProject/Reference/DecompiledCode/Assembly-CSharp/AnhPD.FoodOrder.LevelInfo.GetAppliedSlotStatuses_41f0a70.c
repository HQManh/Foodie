// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$GetAppliedSlotStatuses
// address: 0x41f0a70
// body: available
// range: 0x41f0a70-0x41f0cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f0cf8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f0cfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_LevelInfo__GetAppliedSlotStatuses(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int local_64;
  
  if ((DAT_09516b70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171ea8);
    FUN_03f5c2a4(&DAT_09186c38);
    FUN_03f5c2a4(&DAT_091adaa0);
    FUN_03f5c2a4(&DAT_091adaa8);
    FUN_03f5c2a4(&DAT_091ada98);
    FUN_03f5c2a4(&DAT_0917c4c0);
    DAT_09516b70 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0917c4c0);
  FUN_0579924c(lVar4,DAT_091ada98);
  AnhPD_FoodOrder_LevelInfo__get_InitData();
  lVar5 = AnhPD_FoodOrder_StackModeService__ResolveQueues();
  if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
    uVar13 = 0;
    uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar13) {
LAB_041f0cf8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar9 = *(long *)(lVar5 + uVar13 * 8 + 0x20);
      if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0)) &&
         (0 < (int)*(ulong *)(lVar9 + 0x18))) {
        uVar8 = 0;
        uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar8) goto LAB_041f0cf8;
          lVar14 = *(long *)(lVar9 + uVar8 * 0x18 + 0x28);
          if ((lVar14 != 0) && (0 < (int)*(ulong *)(lVar14 + 0x18))) {
            uVar10 = 0;
            uVar11 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
            do {
              uVar6 = DAT_09171ea8;
              if (uVar11 <= uVar10) goto LAB_041f0cf8;
              iVar1 = *(int *)(lVar14 + 0x20 + uVar10 * 4);
              if (iVar1 != 0) {
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
                local_64 = iVar1;
                uVar7 = FUN_03f5c42c(DAT_09186c38,&local_64);
                if (*(int *)(DAT_09535470 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09535470);
                }
                uVar11 = System_Enum__IsDefined(uVar6,uVar7,0);
                if ((uVar11 & 1) != 0) {
                  if (lVar4 == 0) {
LAB_041f0cfc:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar11 = FUN_05799e5c(lVar4,iVar1,DAT_091adaa8);
                  lVar3 = DAT_091adaa0;
                  if ((uVar11 & 1) == 0) {
                    lVar12 = *(long *)(lVar4 + 0x10);
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_041f0cfc;
                    uVar2 = *(uint *)(lVar4 + 0x18);
                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                      *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
                    }
                    else {
                      FUN_05799adc(lVar4,iVar1,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                  }
                }
              }
              uVar11 = (ulong)*(uint *)(lVar14 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar14 + 0x18));
          }
          uVar8 = uVar8 + 1;
          uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return lVar4;
}

