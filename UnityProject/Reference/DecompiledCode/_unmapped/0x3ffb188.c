// rea decompile_all
// name: std::__ndk1::collate<wchar_t>::do_transform
// address: 0x3ffb188
// body: available
// range: 0x3ffb188-0x3ffb24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::collate<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

wchar_t * std::__ndk1::collate<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  size_t __n;
  wchar_t *pwVar1;
  wchar_t *extraout_x1;
  wchar_t *pwVar2;
  wchar_t *in_x2;
  byte *in_x8;
  wchar_t *pwVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = (long)in_x2 - (long)param_2;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 < 0x3ffffffffffffff0) {
    if (uVar5 < 5) {
      pwVar3 = (wchar_t *)(in_x8 + 4);
      *in_x8 = (byte)(uVar4 >> 1) & 0xfe;
    }
    else {
      pwVar3 = operator_new((uVar5 | 3) * 4 + 4);
      *(ulong *)(in_x8 + 8) = uVar5;
      *(wchar_t **)(in_x8 + 0x10) = pwVar3;
      *(ulong *)in_x8 = (uVar5 | 3) + 2;
      param_1 = pwVar3;
    }
    if (param_2 != in_x2) {
      __n = (uVar4 - 4 & 0xfffffffffffffffc) + 4;
      param_1 = memcpy(pwVar3,param_2,__n);
      pwVar3 = (wchar_t *)((long)pwVar3 + __n);
    }
    *pwVar3 = L'\0';
    return param_1;
  }
  FUN_03fe3950();
  if (extraout_x1 != in_x2) {
    pwVar1 = (wchar_t *)0x0;
    pwVar3 = extraout_x1;
    do {
      pwVar2 = pwVar3 + 1;
      uVar4 = (ulong)(uint)*pwVar3 + (long)pwVar1 * 0x10;
      uVar5 = uVar4 & 0xf000000000000000;
      pwVar1 = (wchar_t *)((uVar5 | uVar5 >> 0x38) ^ uVar4);
      pwVar3 = pwVar2;
    } while (pwVar2 != in_x2);
    return pwVar1;
  }
  return (wchar_t *)0x0;
}

