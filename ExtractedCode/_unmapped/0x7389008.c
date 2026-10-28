// rea decompile_all
// name: FUN_07389008
// address: 0x7389008
// body: available
// range: 0x7389008-0x7389477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7389464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7389468 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7389474 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_07389008(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar5;
  ulong uVar6;
  
  FUN_0612c078();
  lVar1 = *unaff_x19;
  plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar1 = *unaff_x19;
  }
  if (plVar5 != (long *)0x0) {
    lVar1 = **(long **)(lVar1 + 0xb8);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
LAB_0738946c:
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if (*(uint *)(plVar5 + 3) < 0xcd) {
LAB_07389468:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar5[0xd0] = lVar1;
    thunk_FUN_03f5d7b8(plVar5 + 0xd0,lVar1);
    plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
    if (*(int *)(DAT_09196990 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar5 != (long *)0x0) {
      lVar1 = **(long **)(DAT_09196990 + 0xb8);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
      goto LAB_0738946c;
      if (*(uint *)(plVar5 + 3) < 0xce) goto LAB_07389468;
      plVar5[0xd1] = lVar1;
      thunk_FUN_03f5d7b8(plVar5 + 0xd1,lVar1);
      plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
      if (*(int *)(DAT_09196998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (plVar5 != (long *)0x0) {
        lVar1 = **(long **)(DAT_09196998 + 0xb8);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
        goto LAB_0738946c;
        if (*(uint *)(plVar5 + 3) < 0xcf) goto LAB_07389468;
        plVar5[0xd2] = lVar1;
        thunk_FUN_03f5d7b8(plVar5 + 0xd2,lVar1);
        plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
        if (*(int *)(DAT_091969a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar5 != (long *)0x0) {
          lVar1 = **(long **)(DAT_091969a0 + 0xb8);
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
          goto LAB_0738946c;
          if (*(uint *)(plVar5 + 3) < 0xd0) goto LAB_07389468;
          plVar5[0xd3] = lVar1;
          thunk_FUN_03f5d7b8(plVar5 + 0xd3,lVar1);
          plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
          if (*(int *)(DAT_09196978 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (plVar5 != (long *)0x0) {
            lVar1 = **(long **)(DAT_09196978 + 0xb8);
            if ((lVar1 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
            goto LAB_0738946c;
            if (*(uint *)(plVar5 + 3) < 0xd1) goto LAB_07389468;
            plVar5[0xd4] = lVar1;
            thunk_FUN_03f5d7b8(plVar5 + 0xd4,lVar1);
            plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
            if (*(int *)(DAT_09196960 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (plVar5 != (long *)0x0) {
              lVar1 = **(long **)(DAT_09196960 + 0xb8);
              if ((lVar1 != 0) &&
                 (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
              goto LAB_0738946c;
              if (*(uint *)(plVar5 + 3) < 0xd2) goto LAB_07389468;
              plVar5[0xd5] = lVar1;
              thunk_FUN_03f5d7b8(plVar5 + 0xd5,lVar1);
              plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
              if (*(int *)(DAT_09196968 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (plVar5 != (long *)0x0) {
                lVar1 = **(long **)(DAT_09196968 + 0xb8);
                if ((lVar1 != 0) &&
                   (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
                goto LAB_0738946c;
                if (*(uint *)(plVar5 + 3) < 0xd3) goto LAB_07389468;
                plVar5[0xd6] = lVar1;
                thunk_FUN_03f5d7b8(plVar5 + 0xd6,lVar1);
                plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
                if (*(int *)(DAT_09196970 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (plVar5 != (long *)0x0) {
                  lVar1 = **(long **)(DAT_09196970 + 0xb8);
                  if ((lVar1 != 0) &&
                     (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)
                     ) goto LAB_0738946c;
                  if (*(uint *)(plVar5 + 3) < 0xd4) goto LAB_07389468;
                  plVar5[0xd7] = lVar1;
                  thunk_FUN_03f5d7b8(plVar5 + 0xd7,lVar1);
                  uVar6 = 0xe0;
                  lVar1 = 0x720;
                  do {
                    lVar2 = *unaff_x22;
                    plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      FUN_03f5c424();
                      lVar2 = *unaff_x22;
                    }
                    if (plVar5 == (long *)0x0) goto LAB_07389464;
                    lVar2 = **(long **)(lVar2 + 0xb8);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar3 == 0)) goto LAB_0738946c;
                    if (*(uint *)(plVar5 + 3) <= uVar6) goto LAB_07389468;
                    *(long *)((long)plVar5 + lVar1) = lVar2;
                    thunk_FUN_03f5d7b8((long)plVar5 + lVar1,lVar2);
                    uVar6 = uVar6 + 1;
                    lVar1 = lVar1 + 8;
                  } while (uVar6 != 0x100);
                  uVar6 = 0;
                  lVar1 = 0x20;
                  while( true ) {
                    lVar2 = *unaff_x21;
                    plVar5 = *(long **)(*(long *)(*unaff_x20 + 0xb8) + 8);
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      FUN_03f5c424();
                      lVar2 = *unaff_x21;
                    }
                    if (plVar5 == (long *)0x0) break;
                    lVar2 = **(long **)(lVar2 + 0xb8);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar3 == 0)) goto LAB_0738946c;
                    if (*(uint *)(plVar5 + 3) <= uVar6) goto LAB_07389468;
                    *(long *)((long)plVar5 + lVar1) = lVar2;
                    thunk_FUN_03f5d7b8((long)plVar5 + lVar1,lVar2);
                    uVar6 = uVar6 + 1;
                    lVar1 = lVar1 + 8;
                    if (uVar6 == 0x80) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_07389464:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

