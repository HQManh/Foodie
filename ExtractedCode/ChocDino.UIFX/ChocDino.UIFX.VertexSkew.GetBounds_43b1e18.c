// rea decompile_all
// name: ChocDino.UIFX.VertexSkew$$GetBounds
// address: 0x43b1e18
// body: available
// range: 0x43b1e18-0x43b1e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b1e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VertexSkew__GetBounds(long param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  
  if (param_1 != 0) {
    uVar4 = 0xff7fffffff7fffff;
    uVar3 = 0x7f7fffff7f7fffff;
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar1 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      puVar2 = (ulong *)(param_1 + 0x20);
      do {
        uVar5 = *puVar2;
        uVar1 = uVar1 - 1;
        fVar6 = (float)(uVar5 >> 0x20);
        uVar3 = uVar3 ^ (uVar3 ^ uVar5) &
                        CONCAT44(-(uint)(fVar6 < (float)(uVar3 >> 0x20)),
                                 -(uint)((float)uVar5 < (float)uVar3));
        uVar4 = uVar4 ^ (uVar4 ^ uVar5) &
                        CONCAT44(-(uint)((float)(uVar4 >> 0x20) < fVar6),
                                 -(uint)((float)uVar4 < (float)uVar5));
        puVar2 = (ulong *)((long)puVar2 + 0x6c);
      } while (uVar1 != 0);
    }
    *param_2 = uVar3;
    *(undefined4 *)(param_2 + 1) = 0;
    *param_3 = uVar4;
    *(undefined4 *)(param_3 + 1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

