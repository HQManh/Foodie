// rea decompile_all
// name: std::__ndk1::collate_byname<wchar_t>::do_transform
// address: 0x401d3c8
// body: available
// range: 0x401d3c8-0x401d58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401d58c to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

void std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *__s1;
  size_t sVar1;
  wchar_t *in_x2;
  ulong *in_x8;
  ulong *unaff_x19;
  wchar_t *pwVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_68;
  ulong local_60;
  wchar_t *local_58;
  
  uVar4 = (long)in_x2 - (long)param_2;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 < 0x3ffffffffffffff0) {
    if (uVar5 < 5) {
      pwVar2 = (wchar_t *)((ulong)&local_68 | 4);
      local_68 = CONCAT71(local_68._1_7_,(char)(uVar4 >> 1)) & 0xfffffffffffffffe;
    }
    else {
      pwVar2 = operator_new((uVar5 | 3) * 4 + 4);
      local_68 = (uVar5 | 3) + 2;
      local_60 = uVar5;
      local_58 = pwVar2;
    }
    if (param_2 != in_x2) {
      sVar1 = (uVar4 - 4 & 0xfffffffffffffffc) + 4;
      memcpy(pwVar2,param_2,sVar1);
      pwVar2 = (wchar_t *)((long)pwVar2 + sVar1);
    }
    *pwVar2 = L'\0';
    pwVar2 = (wchar_t *)((ulong)&local_68 | 4);
    if ((local_68 & 1) != 0) {
      pwVar2 = local_58;
    }
    sVar1 = wcsxfrm_l((wchar_t *)0x0,pwVar2,0,*(__locale_t *)(param_1 + 4));
    unaff_x19 = in_x8;
    if (sVar1 < 0x3ffffffffffffff0) {
      if (sVar1 < 5) {
        pbVar3 = (byte *)((long)in_x8 + 4);
        *(byte *)in_x8 = (byte)((int)sVar1 << 1);
        if (sVar1 == 0) goto LAB_0401d510;
      }
      else {
        if (0x3ffffffffffffffe < (sVar1 | 3)) goto LAB_0401d58c;
        uVar4 = (sVar1 | 3) + 1;
        pbVar3 = operator_new(uVar4 * 4);
        in_x8[1] = sVar1;
        in_x8[2] = (ulong)pbVar3;
        *in_x8 = uVar4 | 1;
      }
      memset(pbVar3,0,sVar1 << 2);
LAB_0401d510:
      pbVar3 = pbVar3 + sVar1 * 4;
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pwVar2 = (wchar_t *)((ulong)&local_68 | 4);
      if ((local_68 & 1) != 0) {
        pwVar2 = local_58;
      }
      uVar4 = (ulong)(byte)((byte)*in_x8 >> 1);
      __s1 = (wchar_t *)((long)in_x8 + 4);
      if (((byte)*in_x8 & 1) != 0) {
        uVar4 = in_x8[1];
        __s1 = (wchar_t *)in_x8[2];
      }
      wcsxfrm_l(__s1,pwVar2,uVar4 + 1,*(__locale_t *)(param_1 + 4));
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      return;
    }
  }
  else {
    FUN_03fe3950(&local_68);
  }
  FUN_03fe3950(unaff_x19);
LAB_0401d58c:
                    /* WARNING: Subroutine does not return */
  FUN_03f650f4();
}

