// rea decompile_all
// name: CakeOrder.Home.UIHomeNavControl$$SetJourneyNoti
// address: 0x4300b38
// body: available
// range: 0x4300b38-0x4300c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4300c08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4300c0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeNavControl__SetJourneyNoti(long param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_09517545 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c420);
    DAT_09517545 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar4 = 0;
      uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar1 = *(long **)(lVar3 + 0x20 + uVar4 * 8);
        if (plVar1 != (long *)0x0) {
          if (((*(byte *)(DAT_0918c420 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
              (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918c420 + 0x130) * 8 + -8)
               == DAT_0918c420)) && ((int)plVar1[0x19] == 1)) {
            CakeOrder_Home_UIItemNavHomeTab__SetNotiActive(plVar1,param_2 & 1,0);
          }
        }
        uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

