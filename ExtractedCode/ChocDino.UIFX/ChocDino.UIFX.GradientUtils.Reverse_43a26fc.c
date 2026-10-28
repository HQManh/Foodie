// rea decompile_all
// name: ChocDino.UIFX.GradientUtils$$Reverse
// address: 0x43a26fc
// body: available
// range: 0x43a26fc-0x43a27bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a27b4 to 0x8642ba0 UnityEngine.Gradient$$SetKeys (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a27b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43a27bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_GradientUtils__Reverse(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  
  if (param_1 != 0) {
    lVar1 = UnityEngine_Gradient__get_colorKeys(param_1,0);
    lVar2 = UnityEngine_Gradient__get_alphaKeys(param_1,0);
    if (lVar1 != 0) {
      uVar4 = (uint)*(ulong *)(lVar1 + 0x18);
      if (0 < (int)uVar4) {
        uVar3 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
        uVar5 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        pfVar6 = (float *)(lVar1 + 0x30);
        do {
          if (uVar5 == 0) goto LAB_043a27b8;
          uVar3 = uVar3 - 1;
          uVar5 = uVar5 - 1;
          *pfVar6 = 1.0 - *pfVar6;
          pfVar6 = pfVar6 + 5;
        } while (uVar3 != 0);
      }
      if (lVar2 != 0) {
        uVar4 = (uint)*(ulong *)(lVar2 + 0x18);
        if (0 < (int)uVar4) {
          uVar3 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
          uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          pfVar6 = (float *)(lVar2 + 0x24);
          do {
            if (uVar5 == 0) {
LAB_043a27b8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar3 = uVar3 - 1;
            uVar5 = uVar5 - 1;
            *pfVar6 = 1.0 - *pfVar6;
            pfVar6 = pfVar6 + 2;
          } while (uVar3 != 0);
        }
        UnityEngine_Gradient__SetKeys(param_1,lVar1,lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

