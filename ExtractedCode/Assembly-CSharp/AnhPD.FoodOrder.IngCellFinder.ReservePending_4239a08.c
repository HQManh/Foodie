// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$ReservePending
// address: 0x4239a08
// body: available
// range: 0x4239a08-0x4239b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4239b34 to 0x5863604 FUN_05863604 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4239b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCellFinder__ReservePending(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  
  if ((DAT_09516e26 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091b0570);
    DAT_09516e26 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(param_2,0);
  lVar2 = DAT_091b0570;
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = param_2;
        thunk_FUN_03f5d7b8(puVar6,param_2);
      }
      else {
        FUN_057e0c68(lVar4,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar4 = *(long *)(param_1 + 0x38);
      uVar7 = UnityEngine_Time__get_time(0);
      lVar2 = DAT_091affa0;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
            return;
          }
          FUN_05863604(lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

