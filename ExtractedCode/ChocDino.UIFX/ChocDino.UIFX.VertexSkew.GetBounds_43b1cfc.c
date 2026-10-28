// rea decompile_all
// name: ChocDino.UIFX.VertexSkew$$GetBounds
// address: 0x43b1cfc
// body: available
// range: 0x43b1cfc-0x43b1e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b1e14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VertexSkew__GetBounds(long param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_b0 [11];
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  if ((DAT_09517b07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c4c0);
    DAT_09517b07 = 1;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  local_b0[1] = 0;
  local_b0[0] = 0;
  local_b0[3] = 0;
  local_b0[2] = 0;
  local_b0[5] = 0;
  local_b0[4] = 0;
  local_b0[7] = 0;
  local_b0[6] = 0;
  local_b0[9] = 0;
  local_b0[8] = 0;
  uStack_58 = 0;
  local_54 = 0;
  local_b0[10] = 0;
  if (*(int *)(DAT_0918c4c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  memmove(local_b0,(void *)(*(long *)(DAT_0918c4c0 + 0xb8) + 0x14),0x6c);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_1,0);
  if (iVar1 < 1) {
    uVar5 = 0x7f7fffff7f7fffff;
    uVar4 = 0xff7fffffff7fffff;
  }
  else {
    uVar5 = 0x7f7fffff7f7fffff;
    uVar4 = 0xff7fffffff7fffff;
    iVar2 = 0;
    do {
      UnityEngine_UI_VertexHelper__PopulateUIVertex(param_1,local_b0,iVar2,0);
      iVar2 = iVar2 + 1;
      fVar3 = (float)(local_b0[0] >> 0x20);
      uVar5 = uVar5 ^ (uVar5 ^ local_b0[0]) &
                      CONCAT44(-(uint)(fVar3 < (float)(uVar5 >> 0x20)),
                               -(uint)((float)local_b0[0] < (float)uVar5));
      uVar4 = uVar4 ^ (uVar4 ^ local_b0[0]) &
                      CONCAT44(-(uint)((float)(uVar4 >> 0x20) < fVar3),
                               -(uint)((float)uVar4 < (float)local_b0[0]));
    } while (iVar1 != iVar2);
  }
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_3 = uVar4;
  *(undefined4 *)(param_3 + 1) = 0;
  return;
}

