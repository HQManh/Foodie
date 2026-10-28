// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$Play
// address: 0x4257cd0
// body: available
// range: 0x4257cd0-0x4257d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4257d4c to 0x4257b24 CakeOrder.AudioManagerCakeOrder$$PlaySfxAndHaptic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4257d50 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4257d54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__Play(long param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    uVar2 = (uint)*(ulong *)(lVar3 + 0x18);
    if (0 < (int)uVar2) {
      uVar1 = 0;
      do {
        if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) == uVar1) {
LAB_04257d50:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(int *)(lVar3 + 0x20 + uVar1 * 4) == param_2) {
          lVar4 = *(long *)(param_1 + 0x58);
          if (lVar4 == 0) goto LAB_04257d54;
          uVar5 = (uint)*(undefined8 *)(lVar4 + 0x18);
          if ((long)uVar1 < (long)(int)uVar5) {
            if ((uint)uVar1 < uVar5) {
              CakeOrder_AudioManagerCakeOrder__PlaySfxAndHaptic
                        (param_1,*(undefined8 *)(lVar4 + uVar1 * 8 + 0x20),3);
              return;
            }
            goto LAB_04257d50;
          }
        }
        uVar1 = uVar1 + 1;
      } while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar1);
    }
    return;
  }
LAB_04257d54:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

