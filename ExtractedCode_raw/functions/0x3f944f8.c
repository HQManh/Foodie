// rea decompile_all
// name: FUN_03f944f8
// address: 0x3f944f8
// body: available
// range: 0x3f944f8-0x3f945d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f945d0 to 0x3fc1f7c thunk_FUN_03facaac (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f944f8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  uVar4 = FUN_03f8ee94();
  if ((uVar4 <= param_1) &&
     ((uVar4 = FUN_03f87dc0(), (uVar4 & 1) == 0 || (uVar4 = FUN_03f87de0(param_1), (uVar4 & 1) != 0)
      ))) {
    if ((DAT_09534f78 & 0xfffffffffffffff) == 0) {
      puVar7 = DAT_09534f70 + DAT_09534f78 * 2;
    }
    else {
      uVar4 = (long)(DAT_09534f78 << 4) >> 4;
      puVar7 = DAT_09534f70;
      do {
        uVar6 = uVar4 >> 1;
        uVar1 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
        uVar4 = uVar6;
        if (puVar7[uVar6 * 2] <= param_1) {
          puVar7 = puVar7 + uVar6 * 2 + 2;
          uVar4 = uVar1;
        }
      } while (uVar4 != 0);
    }
    uVar4 = FUN_03f87dc0();
    if ((uVar4 & 1) != 0) {
LAB_03f945b8:
      uVar5 = thunk_FUN_03facaac(puVar7[(ulong)(puVar7 != DAT_09534f70) * -2 + 1]);
      return uVar5;
    }
    if (puVar7 != DAT_09534f70 + DAT_09534f78 * 2) {
      lVar3 = *puVar7 - param_1;
      lVar2 = -lVar3;
      if (-1 < lVar3) {
        lVar2 = lVar3;
      }
      if (lVar2 < 5000) goto LAB_03f945b8;
    }
  }
  return 0;
}

