// rea decompile_all
// name: CakeOrder.InGame.LevelBaseCakeOrderAbstract$$RefreshBoosterUsable
// address: 0x4390b58
// body: available
// range: 0x4390b58-0x4390cc3 inclusive
// range: 0x4390d34-0x4390d5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4390d54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4390d58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelBaseCakeOrderAbstract__RefreshBoosterUsable(long *param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte local_64 [4];
  
  if ((DAT_09517a34 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c528);
    FUN_03f5c2a4(&DAT_0919c530);
    FUN_03f5c2a4(&DAT_091877c8);
    DAT_09517a34 = 1;
  }
  local_64[0] = 0;
  if (*(int *)(DAT_091877c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = **(long **)(DAT_091877c8 + 0xb8);
  if (lVar5 == 0) {
LAB_04390d54:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar6 = 0;
    uVar3 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      iVar1 = *(int *)(lVar5 + 0x20 + uVar6 * 4);
      if (iVar1 != 0) {
        bVar2 = (**(code **)(*param_1 + 0x238))(param_1,iVar1,*(undefined8 *)(*param_1 + 0x240));
        if (param_1[0x18] == 0) goto LAB_04390d54;
        uVar3 = FUN_06f2b6a8(param_1[0x18],iVar1,local_64,DAT_0919c528);
        if (((uVar3 & 1) == 0) || (local_64[0] != (bVar2 & 1))) {
          if (param_1[0x18] == 0) goto LAB_04390d54;
          FUN_06f29d14(param_1[0x18],iVar1,bVar2 & 1,DAT_0919c530);
          lVar4 = param_1[0x12];
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),iVar1,bVar2 & 1,*(undefined8 *)(lVar4 + 0x28));
          }
        }
      }
      uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return;
}

