// rea decompile_all
// name: System.Globalization.NumberFormatInfo$$.ctor
// address: 0x7535840
// body: available
// range: 0x7535840-0x7535deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7535de4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7535de8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_NumberFormatInfo___ctor(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((DAT_09521895 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09226dc0);
    FUN_03f5c2a4(&DAT_091f9dc0);
    FUN_03f5c2a4(&DAT_091f86a8);
    FUN_03f5c2a4(&DAT_091f9be0);
    FUN_03f5c2a4(&DAT_091f9f28);
    FUN_03f5c2a4(&DAT_091f9ef0);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_09226ae0);
    FUN_03f5c2a4(&DAT_09204ae0);
    FUN_03f5c2a4(&DAT_091f7250);
    FUN_03f5c2a4(&DAT_091f8dd8);
    FUN_03f5c2a4(&DAT_091f9f08);
    FUN_03f5c2a4(&DAT_091f9e28);
    FUN_03f5c2a4(&DAT_09208538);
    FUN_03f5c2a4(&DAT_091f9f18);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_091f9758);
    FUN_03f5c2a4(&DAT_091f8f68);
    FUN_03f5c2a4(&DAT_091f9ea0);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_09521895 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091801b8,1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined4 *)(lVar1 + 0x20) = 3;
      *(long *)(param_1 + 0x10) = lVar1;
      thunk_FUN_03f5d7b8();
      lVar1 = FUN_03f5c394(DAT_091801b8,1);
      if (lVar1 == 0) goto LAB_07535de8;
      if (*(int *)(lVar1 + 0x18) != 0) {
        *(undefined4 *)(lVar1 + 0x20) = 3;
        *(long *)(param_1 + 0x18) = lVar1;
        thunk_FUN_03f5d7b8();
        lVar1 = FUN_03f5c394(DAT_091801b8,1);
        if (lVar1 == 0) goto LAB_07535de8;
        if (*(int *)(lVar1 + 0x18) != 0) {
          *(undefined4 *)(lVar1 + 0x20) = 3;
          *(long *)(param_1 + 0x20) = lVar1;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x28) = DAT_091f86a8;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x30) = DAT_091f8a38;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x38) = DAT_091f8f68;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x40) = DAT_091f86d8;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x48) = DAT_091f86d8;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x50) = DAT_091f8f68;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x58) = DAT_09226ae0;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x68) = DAT_09208538;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x70) = DAT_09204ae0;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x78) = DAT_091f8dd8;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x80) = DAT_091f8f68;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x88) = DAT_091f86d8;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x90) = DAT_091f7250;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(param_1 + 0x98) = DAT_09226dc0;
          thunk_FUN_03f5d7b8();
          lVar1 = FUN_03f5c394(DAT_091805f8,10);
          if (lVar1 == 0) goto LAB_07535de8;
          if (*(int *)(lVar1 + 0x18) != 0) {
            *(undefined8 *)(lVar1 + 0x20) = DAT_091f95f0;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
            if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar1 + 0x28) = DAT_091f9758;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
              if (2 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x30) = DAT_091f9be0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
                if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar1 + 0x38) = DAT_091f9dc0;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38));
                  if (4 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined8 *)(lVar1 + 0x40) = DAT_091f9e28;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
                    if (5 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x48) = DAT_091f9ea0;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48));
                      if (6 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x50) = DAT_091f9ef0;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50));
                        if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                          *(undefined8 *)(lVar1 + 0x58) = DAT_091f9f08;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58));
                          if (8 < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x60) = DAT_091f9f18;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60));
                            if (9 < *(uint *)(lVar1 + 0x18)) {
                              *(undefined8 *)(lVar1 + 0x68) = DAT_091f9f28;
                              thunk_FUN_03f5d7b8();
                              *(long *)(param_1 + 0xa0) = lVar1;
                              thunk_FUN_03f5d7b8((long *)(param_1 + 0xa0),lVar1);
                              *(undefined4 *)(param_1 + 0xbc) = 1;
                              *(undefined8 *)(param_1 + 200) = 0x100000002;
                              *(undefined8 *)(param_1 + 0xac) = 0x200000002;
                              *(undefined2 *)(param_1 + 0xd3) = 0x101;
                              System_Object___ctor(param_1,0);
                              if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              if (DAT_095216cd == '\0') {
                                FUN_03f5c2a4(&DAT_09184c68);
                                DAT_095216cd = '\x01';
                              }
                              if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
                                if (param_2 == 0) {
                                  return;
                                }
                                System_Globalization_CultureData__GetNFIValues(param_2,param_1);
                                uVar2 = System_String__IsNullOrEmpty
                                                  (*(undefined8 *)(param_2 + 0x58),0);
                                if ((uVar2 & 1) == 0) {
                                  return;
                                }
                              }
                              *(undefined1 *)(param_1 + 0xd2) = 1;
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07535de8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

