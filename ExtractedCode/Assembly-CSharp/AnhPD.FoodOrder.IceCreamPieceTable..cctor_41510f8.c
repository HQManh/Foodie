// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamPieceTable$$.cctor
// address: 0x41510f8
// body: available
// range: 0x41510f8-0x41514f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41514ec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41514f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41514f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamPieceTable___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_0951648b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_0917fb08);
    FUN_03f5c2a4(&DAT_09180130);
    FUN_03f5c2a4(&DAT_091f3700);
    FUN_03f5c2a4(&DAT_091f3710);
    FUN_03f5c2a4(&DAT_091f37c8);
    FUN_03f5c2a4(&DAT_091f37f0);
    FUN_03f5c2a4(&DAT_091f3818);
    FUN_03f5c2a4(&DAT_091f3820);
    DAT_0951648b = 1;
  }
  uVar1 = FUN_03f5c394(DAT_09180130,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3700,0);
  **(undefined8 **)(DAT_09186a68 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09186a68 + 0xb8),uVar1);
  uVar1 = FUN_03f5c394(DAT_09180130,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f37c8,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_09180130,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f37f0,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_09180130,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3818,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  lVar3 = FUN_03f5c394(DAT_09180130,2);
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x18) != 0) &&
       (*(undefined4 *)(lVar3 + 0x20) = 0x1c, lVar4 = DAT_09186a68, *(int *)(lVar3 + 0x18) != 1)) {
      *(undefined4 *)(lVar3 + 0x24) = 0x1d;
      *(long *)(*(long *)(lVar4 + 0xb8) + 0x20) = lVar3;
      thunk_FUN_03f5d7b8();
      lVar3 = FUN_03f5c394(DAT_09180130,2);
      if (lVar3 == 0) goto LAB_041514f4;
      if ((*(int *)(lVar3 + 0x18) != 0) &&
         (*(undefined4 *)(lVar3 + 0x20) = 0x1a, *(int *)(lVar3 + 0x18) != 1)) {
        lVar4 = *(long *)(DAT_09186a68 + 0xb8);
        *(undefined4 *)(lVar3 + 0x24) = 0x1b;
        *(long *)(lVar4 + 0x28) = lVar3;
        thunk_FUN_03f5d7b8();
        uVar1 = FUN_03f5c394(DAT_09180130,3);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3710,0);
        puVar2 = (undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x30);
        *puVar2 = uVar1;
        thunk_FUN_03f5d7b8(puVar2,uVar1);
        lVar3 = FUN_03f5c394(DAT_09180130,2);
        if (lVar3 == 0) goto LAB_041514f4;
        if ((*(int *)(lVar3 + 0x18) != 0) &&
           (*(undefined4 *)(lVar3 + 0x20) = 8, *(int *)(lVar3 + 0x18) != 1)) {
          lVar4 = *(long *)(DAT_09186a68 + 0xb8);
          *(undefined4 *)(lVar3 + 0x24) = 7;
          *(long *)(lVar4 + 0x38) = lVar3;
          thunk_FUN_03f5d7b8();
          uVar1 = FUN_03f5c394(DAT_09180130,3);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3820,0);
          puVar2 = (undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x40);
          *puVar2 = uVar1;
          thunk_FUN_03f5d7b8(puVar2,uVar1);
          lVar3 = FUN_03f5c394(DAT_09180130,1);
          if (lVar3 == 0) goto LAB_041514f4;
          if (*(int *)(lVar3 + 0x18) != 0) {
            lVar4 = *(long *)(DAT_09186a68 + 0xb8);
            *(undefined4 *)(lVar3 + 0x20) = 0x25;
            *(long *)(lVar4 + 0x48) = lVar3;
            thunk_FUN_03f5d7b8();
            lVar3 = FUN_03f5c394(DAT_0917fb08,5);
            if (lVar3 == 0) goto LAB_041514f4;
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x48)
              ;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar3 + 0x28) =
                     *(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x18);
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28));
                if (2 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x30) =
                       *(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x20);
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar3 + 0x38) =
                         *(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x28);
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
                    if (4 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x40) =
                           *(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x30);
                      thunk_FUN_03f5d7b8();
                      plVar5 = (long *)(*(long *)(DAT_09186a68 + 0xb8) + 0x50);
                      *plVar5 = lVar3;
                      thunk_FUN_03f5d7b8(plVar5,lVar3);
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
LAB_041514f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

