// rea decompile_all
// name: MaxSdkBase.WaterfallInfo$$ToString
// address: 0x7373ff4
// body: available
// range: 0x7373ff4-0x7374313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737430c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7374310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkBase_WaterfallInfo__ToString(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_48;
  
  if ((DAT_09520942 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca888);
    FUN_03f5c2a4(&DAT_091caed0);
    FUN_03f5c2a4(&DAT_091794b8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f3288);
    FUN_03f5c2a4(&DAT_091968e8);
    FUN_03f5c2a4(&DAT_091f8938);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_09213f28);
    FUN_03f5c2a4(&DAT_09214720);
    FUN_03f5c2a4(&DAT_091f89b0);
    FUN_03f5c2a4(&DAT_091f88d0);
    DAT_09520942 = 1;
  }
  local_48 = 0;
  lVar2 = FUN_03f5c394(DAT_091805f8,9);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = DAT_09213f28;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x10);
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = DAT_091f89b0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x18);
            thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = DAT_091f88d0;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x40));
              local_48 = *(undefined8 *)(param_1 + 0x28);
              uVar3 = System_Int64__ToString(&local_48,0);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = uVar3;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x48),uVar3);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = DAT_091f8938;
                  thunk_FUN_03f5d7b8();
                  uVar3 = *(undefined8 *)(param_1 + 0x20);
                  if (*(int *)(DAT_091968e8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar1 = DAT_091f86e8;
                  puVar5 = *(undefined8 **)(DAT_091968e8 + 0xb8);
                  lVar6 = puVar5[1];
                  if (lVar6 == 0) {
                    if (*(int *)(DAT_091968e8 + 0xe4) == 0) {
                      FUN_03f5c424();
                      puVar5 = *(undefined8 **)(DAT_091968e8 + 0xb8);
                    }
                    uVar7 = *puVar5;
                    lVar6 = thunk_FUN_03f9944c(DAT_091794b8);
                    FUN_05324070(lVar6,uVar7,DAT_091f3288,0);
                    plVar4 = (long *)(*(long *)(DAT_091968e8 + 0xb8) + 8);
                    *plVar4 = lVar6;
                    thunk_FUN_03f5d7b8(plVar4,lVar6);
                  }
                  uVar3 = FUN_04af8044(uVar3,lVar6,DAT_091ca888);
                  uVar3 = FUN_04b049e4(uVar3,DAT_091caed0);
                  uVar3 = System_String__Join(uVar1,uVar3,0);
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar2 + 0x58) = uVar3;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x58),uVar3);
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x60) = DAT_09214720;
                      thunk_FUN_03f5d7b8();
                      System_String__Concat(lVar2,0);
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
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

