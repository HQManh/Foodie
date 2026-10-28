// rea decompile_all
// name: Mono.Math.BigInteger$$.ctor
// address: 0x7423854
// body: available
// range: 0x7423854-0x7423a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7423a7c to 0x7428974 Mono.Math.BigInteger$$Normalize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7423a80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7423a84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Math_BigInteger___ctor(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((DAT_09520fbc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091807b0);
    DAT_09520fbc = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
LAB_07423a84:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(ulong *)(param_2 + 0x18);
  if (uVar4 == 0) {
    param_2 = FUN_03f5c394(DAT_0917fc88,1);
    if (param_2 == 0) goto LAB_07423a84;
    uVar4 = *(ulong *)(param_2 + 0x18);
  }
  uVar2 = DAT_091807b0;
  uVar6 = (uint)(uVar4 >> 2) & 0x3fffffff;
  uVar5 = (uint)uVar4 & 3;
  if ((uVar4 & 3) != 0) {
    uVar6 = uVar6 + 1;
  }
  *(uint *)(param_1 + 0x10) = uVar6;
  lVar3 = FUN_03f5c394(uVar2);
  plVar9 = (long *)(param_1 + 0x18);
  *plVar9 = lVar3;
  thunk_FUN_03f5d7b8(plVar9,lVar3);
  uVar6 = (uint)*(ulong *)(param_2 + 0x18);
  if (2 < (int)(uVar6 - 1)) {
    lVar3 = *plVar9;
    uVar4 = 0;
    uVar8 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    uVar7 = (ulong)(uVar6 - 1);
    do {
      if ((((uVar8 <= uVar7 - 3) || (uVar8 <= uVar7 - 2)) || (uVar8 <= uVar7 - 1)) ||
         (uVar8 <= uVar7)) goto LAB_07423a80;
      if (lVar3 == 0) goto LAB_07423a84;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_07423a80;
      *(uint *)(lVar3 + 0x20 + uVar4 * 4) =
           (uint)*(byte *)(param_2 + uVar7 + 0x1d) << 0x18 |
           (uint)*(byte *)(param_2 + uVar7 + 0x1e) << 0x10 |
           (uint)*(byte *)(param_2 + uVar7 + 0x1f) << 8 | (uint)*(byte *)(param_2 + uVar7 + 0x20);
      uVar4 = uVar4 + 1;
      bVar1 = 6 < (long)uVar7;
      uVar7 = uVar7 - 4;
    } while (bVar1);
  }
  if (uVar5 == 3) {
    if (((uVar6 == 0) || (uVar6 == 1)) || (uVar6 < 3)) {
LAB_07423a80:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_07423a84;
    uVar5 = *(int *)(param_1 + 0x10) - 1;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_07423a80;
    uVar6 = (uint)*(byte *)(param_2 + 0x20) << 0x10 | (uint)*(byte *)(param_2 + 0x21) << 8 |
            (uint)*(byte *)(param_2 + 0x22);
  }
  else if (uVar5 == 2) {
    if ((uVar6 == 0) || (uVar6 == 1)) goto LAB_07423a80;
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_07423a84;
    uVar5 = *(int *)(param_1 + 0x10) - 1;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_07423a80;
    uVar6 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x20),*(undefined1 *)(param_2 + 0x21));
  }
  else {
    if (uVar5 != 1) goto LAB_07423a6c;
    if (uVar6 == 0) goto LAB_07423a80;
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_07423a84;
    uVar5 = *(int *)(param_1 + 0x10) - 1;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_07423a80;
    uVar6 = (uint)*(byte *)(param_2 + 0x20);
  }
  *(uint *)(lVar3 + (long)(int)uVar5 * 4 + 0x20) = uVar6;
LAB_07423a6c:
  Mono_Math_BigInteger__Normalize(param_1);
  return;
}

