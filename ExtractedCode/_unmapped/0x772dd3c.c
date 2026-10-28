// rea decompile_all
// name: FUN_0772dd3c
// address: 0x772dd3c
// body: available
// range: 0x772dd3c-0x772de5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x772de58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772de5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0772dd3c(float param_1,float param_2,uint param_3,uint param_4,uint param_5,float *param_6,
                 float *param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_09522a55 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a55 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = **(long **)(DAT_091888a0 + 0xb8);
  if (lVar3 != 0) {
    uVar2 = (param_4 ^ param_3 ^ param_5) * 0xeb2d;
    uVar1 = uVar2 & 0xfe;
    if ((uVar1 < *(uint *)(lVar3 + 0x18)) && ((uVar1 | 1) < *(uint *)(lVar3 + 0x18))) {
      lVar4 = (*(long **)(DAT_091888a0 + 0xb8))[1];
      if (lVar4 == 0) goto LAB_0772de5c;
      uVar2 = uVar2 >> 7 & 0x1fe;
      if ((uVar2 < *(uint *)(lVar4 + 0x18)) && ((uVar2 | 1) < *(uint *)(lVar4 + 0x18))) {
        fVar6 = *(float *)(lVar4 + 0x20 + (ulong)(uVar2 | 1) * 4);
        fVar5 = *(float *)(lVar3 + 0x20 + (ulong)uVar1 * 4) * param_1 +
                *(float *)(lVar3 + 0x20 + (ulong)(uVar1 | 1) * 4) * param_2;
        *param_6 = fVar5 * *(float *)(lVar4 + 0x20 + (ulong)uVar2 * 4);
        *param_7 = fVar5 * fVar6;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0772de5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

