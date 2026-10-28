// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$Log
// address: 0x41f6ac8
// body: available
// range: 0x41f6ac8-0x41f6c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f6c68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__Log(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_24;
  
  if ((DAT_09516bbb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05d8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09225f80);
    DAT_09516bbb = 1;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x10);
  local_24 = UnityEngine_Time__get_timeSinceLevelLoad(0);
  uVar2 = FUN_03f5c42c(DAT_09535450,&local_24);
  uVar2 = System_String__Format(DAT_09225f80,uVar2,param_1,0);
  lVar3 = DAT_091b0570;
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar5,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      lVar3 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x10);
      if (lVar3 != 0) {
        if (6000 < *(int *)(lVar3 + 0x18)) {
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189140);
            lVar3 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x10);
            if (lVar3 == 0) goto LAB_041f6c68;
          }
          FUN_057e251c(lVar3,0,DAT_091b05d8);
          *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x9c) =
               *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x9c) + 1;
        }
        return;
      }
    }
  }
LAB_041f6c68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

