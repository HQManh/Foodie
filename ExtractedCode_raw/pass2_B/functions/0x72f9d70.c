// rea decompile_all
// name: IapAdsSystem.AdsCampaignConfig$$CreateDefault
// address: 0x72f9d70
// body: available
// range: 0x72f9d70-0x72fa087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fa074 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72fa078 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72fa084 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long IapAdsSystem_AdsCampaignConfig__CreateDefault(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_0952042f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180fb8);
    FUN_03f5c2a4(&DAT_0917fb80);
    FUN_03f5c2a4(&DAT_09180fc8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0920b3f8);
    FUN_03f5c2a4(&DAT_091fc6d0);
    FUN_03f5c2a4(&DAT_092041e0);
    FUN_03f5c2a4(&DAT_091fb650);
    DAT_0952042f = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09180fb8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = DAT_091fc6d0;
    thunk_FUN_03f5d7b8();
    plVar2 = (long *)FUN_03f5c394(DAT_0917fb80,3);
    lVar3 = thunk_FUN_03f9944c(DAT_09180fc8);
    System_Object___ctor(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = DAT_091fc6d0;
      thunk_FUN_03f5d7b8();
      lVar4 = FUN_03f5c394(DAT_091805f8,1);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_072fa078;
        *(undefined8 *)(lVar4 + 0x20) = DAT_091fc6d0;
        thunk_FUN_03f5d7b8();
        *(long *)(lVar3 + 0x18) = lVar4;
        thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),lVar4);
        if (plVar2 != (long *)0x0) {
          lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40));
          if (lVar4 == 0) goto LAB_072fa07c;
          if ((int)plVar2[3] == 0) goto LAB_072fa078;
          plVar2[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
          lVar3 = thunk_FUN_03f9944c(DAT_09180fc8);
          System_Object___ctor(lVar3,0);
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) = DAT_091fb650;
            thunk_FUN_03f5d7b8();
            lVar4 = FUN_03f5c394(DAT_091805f8,2);
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x18) != 0) {
                *(undefined8 *)(lVar4 + 0x20) = DAT_091fb650;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar4 + 0x28) = DAT_0920b3f8;
                  thunk_FUN_03f5d7b8();
                  *(long *)(lVar3 + 0x18) = lVar4;
                  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),lVar4);
                  lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                  if (lVar4 == 0) {
LAB_072fa07c:
                    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar5,0);
                  }
                  if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
                    plVar2[5] = lVar3;
                    thunk_FUN_03f5d7b8(plVar2 + 5,lVar3);
                    lVar3 = thunk_FUN_03f9944c(DAT_09180fc8);
                    System_Object___ctor(lVar3,0);
                    if (lVar3 != 0) {
                      *(undefined8 *)(lVar3 + 0x10) = DAT_092041e0;
                      thunk_FUN_03f5d7b8();
                      lVar4 = FUN_03f5c394(DAT_091805f8,1);
                      if (lVar4 != 0) {
                        if (*(int *)(lVar4 + 0x18) != 0) {
                          *(undefined8 *)(lVar4 + 0x20) = DAT_092041e0;
                          thunk_FUN_03f5d7b8();
                          *(long *)(lVar3 + 0x18) = lVar4;
                          thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),lVar4);
                          lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                          if (lVar4 == 0) goto LAB_072fa07c;
                          if (2 < *(uint *)(plVar2 + 3)) {
                            plVar2[6] = lVar3;
                            thunk_FUN_03f5d7b8(plVar2 + 6,lVar3);
                            *(long *)(lVar1 + 0x18) = (long)plVar2;
                            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),plVar2);
                            return lVar1;
                          }
                        }
                        goto LAB_072fa078;
                      }
                    }
                    goto LAB_072fa074;
                  }
                }
              }
LAB_072fa078:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
          }
        }
      }
    }
  }
LAB_072fa074:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

