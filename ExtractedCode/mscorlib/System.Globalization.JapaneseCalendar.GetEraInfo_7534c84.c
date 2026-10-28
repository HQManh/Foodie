// rea decompile_all
// name: System.Globalization.JapaneseCalendar$$GetEraInfo
// address: 0x7534c84
// body: available
// range: 0x7534c84-0x753513b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7535128 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7535134 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7535138 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Globalization_JapaneseCalendar__GetEraInfo(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0952188f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917feb0);
    FUN_03f5c2a4(&DAT_09184130);
    FUN_03f5c2a4(&DAT_09187280);
    FUN_03f5c2a4(&DAT_09227028);
    FUN_03f5c2a4(&DAT_0920c1d8);
    FUN_03f5c2a4(&DAT_09227020);
    FUN_03f5c2a4(&DAT_0920b300);
    FUN_03f5c2a4(&DAT_09203a58);
    FUN_03f5c2a4(&DAT_0920e2a8);
    FUN_03f5c2a4(&DAT_09226fe0);
    FUN_03f5c2a4(&DAT_09227010);
    FUN_03f5c2a4(&DAT_09226fd8);
    FUN_03f5c2a4(&DAT_09226fe8);
    FUN_03f5c2a4(&DAT_09226fd0);
    FUN_03f5c2a4(&DAT_09227018);
    FUN_03f5c2a4(&DAT_09207248);
    FUN_03f5c2a4(&DAT_09226fa8);
    FUN_03f5c2a4(&DAT_09226fa0);
    DAT_0952188f = 1;
  }
  if (*(int *)(DAT_09187280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09187280 + 0xb8) + 8);
  thunk_FUN_03f6a5cc();
  if (lVar5 == 0) {
    if (*(int *)(DAT_09187280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f6a5cc();
    puVar1 = (undefined8 *)(*(long *)(DAT_09187280 + 0xb8) + 8);
    *puVar1 = 0;
    thunk_FUN_03f5d7b8(puVar1,0);
    lVar5 = *(long *)(*(long *)(DAT_09187280 + 0xb8) + 8);
    thunk_FUN_03f6a5cc();
    if (lVar5 == 0) {
      plVar2 = (long *)FUN_03f5c394(DAT_0917feb0,5);
      lVar5 = thunk_FUN_03f9944c(DAT_09184130);
      System_Globalization_EraInfo___ctor
                (lVar5,5,0x7e3,5,1,0x7e2,1,0x1f2d,DAT_09226fa8,DAT_09226fa0,DAT_0920b300);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_0753512c:
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
        lVar5 = thunk_FUN_03f9944c(DAT_09184130);
        System_Globalization_EraInfo___ctor
                  (lVar5,4,0x7c5,1,8,0x7c4,1,0x1f,DAT_09226fe8,DAT_09226fe0,DAT_09203a58);
        if ((lVar5 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_0753512c;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
          plVar2[5] = lVar5;
          thunk_FUN_03f5d7b8(plVar2 + 5,lVar5);
          lVar5 = thunk_FUN_03f9944c(DAT_09184130);
          System_Globalization_EraInfo___ctor
                    (lVar5,3,0x786,0xc,0x19,0x785,1,0x40,DAT_09227028,DAT_09227020,DAT_0920c1d8);
          if ((lVar5 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_0753512c;
          if (2 < *(uint *)(plVar2 + 3)) {
            plVar2[6] = lVar5;
            thunk_FUN_03f5d7b8(plVar2 + 6,lVar5);
            lVar5 = thunk_FUN_03f9944c(DAT_09184130);
            System_Globalization_EraInfo___ctor
                      (lVar5,2,0x778,7,0x1e,0x777,1,0xf,DAT_09226fd8,DAT_09226fd0,DAT_0920e2a8);
            if ((lVar5 != 0) &&
               (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
            goto LAB_0753512c;
            if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
              plVar2[7] = lVar5;
              thunk_FUN_03f5d7b8(plVar2 + 7,lVar5);
              lVar5 = thunk_FUN_03f9944c(DAT_09184130);
              System_Globalization_EraInfo___ctor
                        (lVar5,1,0x74c,1,1,0x74b,1,0x2d,DAT_09227018,DAT_09227010,DAT_09207248);
              if ((lVar5 != 0) &&
                 (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
              goto LAB_0753512c;
              if (4 < *(uint *)(plVar2 + 3)) {
                plVar2[8] = lVar5;
                thunk_FUN_03f5d7b8(plVar2 + 8,lVar5);
                if (*(int *)(DAT_09187280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                thunk_FUN_03f6a5cc();
                plVar4 = (long *)(*(long *)(DAT_09187280 + 0xb8) + 8);
                *plVar4 = (long)plVar2;
                thunk_FUN_03f5d7b8(plVar4,plVar2);
                goto LAB_075350f0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_075350f0:
  if (*(int *)(DAT_09187280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = *(undefined8 *)(*(long *)(DAT_09187280 + 0xb8) + 8);
  thunk_FUN_03f6a5cc();
  return uVar6;
}

