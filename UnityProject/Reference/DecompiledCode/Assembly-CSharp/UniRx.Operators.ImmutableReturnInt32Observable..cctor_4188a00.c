// rea decompile_all
// name: UniRx.Operators.ImmutableReturnInt32Observable$$.cctor
// address: 0x4188a00
// body: available
// range: 0x4188a00-0x4188dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4188db8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4188dc4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4188dc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4188dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Operators_ImmutableReturnInt32Observable___cctor(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09516753 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180140);
    FUN_03f5c2a4(&DAT_09186b08);
    DAT_09516753 = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180140,0xb);
  lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
  System_Object___ctor(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
  if (lVar3 != 0) {
    if ((int)plVar1[3] != 0) {
      plVar1[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
      lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
      System_Object___ctor(lVar2,0);
      *(undefined4 *)(lVar2 + 0x10) = 0;
      lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
      if (lVar3 == 0) goto LAB_04188dbc;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
        plVar1[5] = lVar2;
        thunk_FUN_03f5d7b8(plVar1 + 5,lVar2);
        lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
        System_Object___ctor(lVar2,0);
        *(undefined4 *)(lVar2 + 0x10) = 1;
        lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
        if (lVar3 == 0) goto LAB_04188dbc;
        if (2 < *(uint *)(plVar1 + 3)) {
          plVar1[6] = lVar2;
          thunk_FUN_03f5d7b8(plVar1 + 6,lVar2);
          lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
          System_Object___ctor(lVar2,0);
          *(undefined4 *)(lVar2 + 0x10) = 2;
          lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
          if (lVar3 == 0) goto LAB_04188dbc;
          if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
            plVar1[7] = lVar2;
            thunk_FUN_03f5d7b8(plVar1 + 7,lVar2);
            lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
            System_Object___ctor(lVar2,0);
            *(undefined4 *)(lVar2 + 0x10) = 3;
            lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
            if (lVar3 == 0) goto LAB_04188dbc;
            if (4 < *(uint *)(plVar1 + 3)) {
              plVar1[8] = lVar2;
              thunk_FUN_03f5d7b8(plVar1 + 8,lVar2);
              lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
              System_Object___ctor(lVar2,0);
              *(undefined4 *)(lVar2 + 0x10) = 4;
              lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
              if (lVar3 == 0) goto LAB_04188dbc;
              if (5 < *(uint *)(plVar1 + 3)) {
                plVar1[9] = lVar2;
                thunk_FUN_03f5d7b8(plVar1 + 9,lVar2);
                lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
                System_Object___ctor(lVar2,0);
                *(undefined4 *)(lVar2 + 0x10) = 5;
                lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
                if (lVar3 == 0) goto LAB_04188dbc;
                if (6 < *(uint *)(plVar1 + 3)) {
                  plVar1[10] = lVar2;
                  thunk_FUN_03f5d7b8(plVar1 + 10,lVar2);
                  lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
                  System_Object___ctor(lVar2,0);
                  *(undefined4 *)(lVar2 + 0x10) = 6;
                  lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
                  if (lVar3 == 0) goto LAB_04188dbc;
                  if ((*(uint *)(plVar1 + 3) & 0xfffffff8) != 0) {
                    plVar1[0xb] = lVar2;
                    thunk_FUN_03f5d7b8(plVar1 + 0xb,lVar2);
                    lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
                    System_Object___ctor(lVar2,0);
                    *(undefined4 *)(lVar2 + 0x10) = 7;
                    lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
                    if (lVar3 == 0) goto LAB_04188dbc;
                    if (8 < *(uint *)(plVar1 + 3)) {
                      plVar1[0xc] = lVar2;
                      thunk_FUN_03f5d7b8(plVar1 + 0xc,lVar2);
                      lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
                      System_Object___ctor(lVar2,0);
                      *(undefined4 *)(lVar2 + 0x10) = 8;
                      lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
                      if (lVar3 == 0) goto LAB_04188dbc;
                      if (9 < *(uint *)(plVar1 + 3)) {
                        plVar1[0xd] = lVar2;
                        thunk_FUN_03f5d7b8(plVar1 + 0xd,lVar2);
                        lVar2 = thunk_FUN_03f9944c(DAT_09186b08);
                        System_Object___ctor(lVar2,0);
                        *(undefined4 *)(lVar2 + 0x10) = 9;
                        lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
                        if (lVar3 == 0) goto LAB_04188dbc;
                        if (10 < *(uint *)(plVar1 + 3)) {
                          plVar1[0xe] = lVar2;
                          thunk_FUN_03f5d7b8(plVar1 + 0xe,lVar2);
                          **(long **)(DAT_09186b08 + 0xb8) = (long)plVar1;
                          thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09186b08 + 0xb8),plVar1);
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
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_04188dbc:
  uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,0);
}

