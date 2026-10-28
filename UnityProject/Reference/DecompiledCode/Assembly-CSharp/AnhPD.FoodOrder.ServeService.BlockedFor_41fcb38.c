// rea decompile_all
// name: AnhPD.FoodOrder.ServeService$$BlockedFor
// address: 0x41fcb38
// body: available
// range: 0x41fcb38-0x41fcd0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41fccfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fcd00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fcd08 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fcd0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ServeService__BlockedFor(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_98;
  undefined8 *puStack_90;
  long local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09516bce & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4268);
    FUN_03f5c2a4(&DAT_091a4270);
    FUN_03f5c2a4(&DAT_091a4278);
    FUN_03f5c2a4(&DAT_091a82e8);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091afe70);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516bce = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  AnhPD_FoodOrder_ServeService__Prune(param_1);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_057e185c(&local_98,*(long *)(param_1 + 0x10),DAT_091afe70);
    lVar4 = 0;
    local_70 = local_88;
    uStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while( true ) {
      do {
        uVar3 = FUN_071bd28c(&local_80,DAT_091a4270);
        lVar2 = local_70;
        lVar1 = local_98;
        if ((uVar3 & 1) == 0) {
          FUN_071bd288(puStack_90,DAT_091a4268);
          if (lVar1 == 0) {
            return lVar4;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(lVar1);
        }
      } while (local_70 == param_3);
      if (local_70 == 0) break;
      uVar5 = *(undefined8 *)(local_70 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar5,param_2,0);
      if ((uVar3 & 1) != 0) {
        if (lVar4 == 0) {
          lVar4 = thunk_FUN_03f9944c(DAT_09179e18);
          FUN_053d6e00(lVar4,DAT_091a8298);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        FUN_053d8058(lVar4,*(undefined8 *)(lVar2 + 0x20),DAT_091a82e8);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

