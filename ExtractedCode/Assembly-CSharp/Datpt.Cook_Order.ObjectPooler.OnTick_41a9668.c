// rea decompile_all
// name: Datpt.Cook_Order.ObjectPooler$$OnTick
// address: 0x41a9668
// body: available
// range: 0x41a9668-0x41a980b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a9800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a9804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a9808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ObjectPooler__OnTick(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_0951689d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fe30);
    FUN_03f5c2a4(&DAT_0919fc58);
    FUN_03f5c2a4(&DAT_0919fe38);
    FUN_03f5c2a4(&DAT_091cb2d0);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b05a8);
    DAT_0951689d = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_06fd811c(*(long *)(param_1 + 0x28),DAT_0919fc58);
    lVar2 = FUN_04b08b78(uVar1,DAT_091cb2d0);
    if (lVar2 != 0) {
      FUN_057e185c(&local_68,lVar2,DAT_091b05a8);
      while( true ) {
        uVar3 = FUN_071bd28c(&local_68,DAT_091a45a0);
        uVar1 = local_58;
        if ((uVar3 & 1) == 0) {
          FUN_071bd288(&local_68,DAT_091a4598);
          return;
        }
        lVar2 = *(long *)(param_1 + 0x30);
        if (lVar2 == 0) break;
        fVar4 = (float)FUN_06fe2a7c(lVar2,local_58,DAT_0919fe30);
        FUN_06fe2ae8(fVar4 + -1.0,lVar2,uVar1,DAT_0919fe38);
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar4 = (float)FUN_06fe2a7c(*(long *)(param_1 + 0x30),uVar1,DAT_0919fe30);
        if (fVar4 <= 0.0) {
          Datpt_Cook_Order_ObjectPooler__ClearPool(param_1,uVar1);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

