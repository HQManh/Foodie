// rea decompile_all
// name: Coffee.UIEffects.UIVertexUtil$$GetBounds
// address: 0x43fa944
// body: available
// range: 0x43fa944-0x43faa73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43faa70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIVertexUtil__GetBounds
               (long param_1,int param_2,int param_3,undefined8 *param_4,ulong *param_5)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_d0 [5];
  ulong local_a4;
  
  if ((DAT_09517e2e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1750);
    DAT_09517e2e = 1;
  }
  if (param_2 < param_3 + param_2) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = 0xff7fffffff7fffff;
    uVar5 = 0xff7fffffff7fffff;
    uVar3 = 0x7f7fffff7f7fffff;
    uVar6 = uVar3;
    do {
      FUN_05894708(local_d0,param_1,param_2,DAT_091b1750);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      fVar1 = (float)(local_d0[0] >> 0x20);
      fVar2 = (float)(local_a4 >> 0x20);
      uVar3 = uVar3 ^ (uVar3 ^ local_d0[0]) &
                      CONCAT44(-(uint)(fVar1 < (float)(uVar3 >> 0x20)),
                               -(uint)((float)local_d0[0] < (float)uVar3));
      uVar4 = uVar4 ^ (uVar4 ^ local_d0[0]) &
                      CONCAT44(-(uint)((float)(uVar4 >> 0x20) < fVar1),
                               -(uint)((float)uVar4 < (float)local_d0[0]));
      uVar6 = uVar6 ^ (uVar6 ^ local_a4) &
                      CONCAT44(-(uint)(fVar2 < (float)(uVar6 >> 0x20)),
                               -(uint)((float)local_a4 < (float)uVar6));
      uVar5 = uVar5 ^ (uVar5 ^ local_a4) &
                      CONCAT44(-(uint)((float)(uVar5 >> 0x20) < fVar2),
                               -(uint)((float)uVar5 < (float)local_a4));
    } while (param_3 != 0);
  }
  else {
    uVar4 = 0xff7fffffff7fffff;
    uVar5 = 0xff7fffffff7fffff;
    uVar3 = 0x7f7fffff7f7fffff;
    uVar6 = uVar3;
  }
  fVar1 = (float)(uVar3 >> 0x20);
  *param_4 = CONCAT44(fVar1 + 0.001,(float)uVar3 + 0.001);
  param_4[1] = CONCAT44(((float)(uVar4 >> 0x20) - fVar1) + -0.002,
                        ((float)uVar4 - (float)uVar3) + -0.002);
  *param_5 = uVar6;
  param_5[1] = CONCAT44((float)(uVar5 >> 0x20) - (float)(uVar6 >> 0x20),(float)uVar5 - (float)uVar6)
  ;
  return;
}

