// rea decompile_all
// name: std::__ndk1::collate_byname<wchar_t>::do_compare
// address: 0x401d1d0
// body: available
// range: 0x401d1d0-0x401d3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401d3c4 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::collate_byname<wchar_t>::do_compare(wchar_t const*, wchar_t const*, wchar_t const*,
   wchar_t const*) const */

uint __thiscall
std::__ndk1::collate_byname<wchar_t>::do_compare
          (collate_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  size_t sVar1;
  ulong uVar2;
  wchar_t *__s2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_90;
  ulong local_88;
  wchar_t *local_80;
  ulong local_78;
  ulong local_70;
  wchar_t *local_68;
  
  uVar9 = (long)param_2 - (long)param_1;
  uVar10 = (long)uVar9 >> 2;
  if (uVar10 < 0x3ffffffffffffff0) {
    if (uVar10 < 5) {
      pwVar8 = (wchar_t *)((ulong)&local_78 | 4);
      local_78 = CONCAT71(local_78._1_7_,(char)(uVar9 >> 1)) & 0xfffffffffffffffe;
    }
    else {
      pwVar8 = operator_new((uVar10 | 3) * 4 + 4);
      local_78 = (uVar10 | 3) + 2;
      local_70 = uVar10;
      local_68 = pwVar8;
    }
    if (param_1 != param_2) {
      sVar1 = (uVar9 - 4 & 0xfffffffffffffffc) + 4;
      memcpy(pwVar8,param_1,sVar1);
      pwVar8 = (wchar_t *)((long)pwVar8 + sVar1);
    }
    uVar9 = (long)param_4 - (long)param_3;
    *pwVar8 = L'\0';
    uVar10 = (long)uVar9 >> 2;
    if (uVar10 < 0x3ffffffffffffff0) {
      if (uVar10 < 5) {
        pwVar8 = (wchar_t *)((ulong)&local_90 | 4);
        local_90 = CONCAT71(local_90._1_7_,(char)(uVar9 >> 1)) & 0xfffffffffffffffe;
      }
      else {
        uVar2 = (uVar10 | 3) + 1;
        pwVar8 = operator_new(uVar2 * 4);
        local_90 = uVar2 | 1;
        local_88 = uVar10;
        local_80 = pwVar8;
      }
      if (param_3 != param_4) {
        sVar1 = (uVar9 - 4 & 0xfffffffffffffffc) + 4;
        memcpy(pwVar8,param_3,sVar1);
        pwVar8 = (wchar_t *)((long)pwVar8 + sVar1);
      }
      pwVar4 = local_68;
      uVar10 = local_78;
      pwVar3 = local_80;
      uVar9 = local_90;
      *pwVar8 = L'\0';
      pwVar8 = (wchar_t *)((ulong)&local_78 | 4);
      if ((local_78 & 1) != 0) {
        pwVar8 = local_68;
      }
      __s2 = (wchar_t *)((ulong)&local_90 | 4);
      if ((local_90 & 1) != 0) {
        __s2 = local_80;
      }
      iVar5 = wcscoll_l(pwVar8,__s2,*(__locale_t *)(this + 0x10));
      if ((uVar9 & 1) != 0) {
        operator_delete(pwVar3);
      }
      if ((uVar10 & 1) != 0) {
        operator_delete(pwVar4);
      }
      uVar7 = (uint)(iVar5 != 0);
      if (iVar5 < 0) {
        uVar7 = 0xffffffff;
      }
      return uVar7;
    }
  }
  else {
    FUN_03fe3950(&local_78);
  }
  uVar6 = FUN_03fe3950(&local_90);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar6);
}

