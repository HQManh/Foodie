// rea decompile_all
// name: std::__ndk1::moneypunct_byname<wchar_t,false>::init
// address: 0x402a578
// body: available
// range: 0x402a578-0x402a8c3 inclusive
// range: 0x402a8c8-0x402a8d3 inclusive
// range: 0x402a95c-0x402a973 inclusive
// range: 0x402a9a0-0x402a9af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402a970 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x402a9ac to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::moneypunct_byname<wchar_t, false>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<wchar_t,false>::init
          (moneypunct_byname<wchar_t,false> *this,char *param_1)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  moneypunct_byname<wchar_t,false> mVar4;
  __locale_t __dataset;
  __locale_t p_Var5;
  ulong uVar6;
  size_t sVar7;
  undefined8 uVar8;
  moneypunct_byname<wchar_t,false> *pmVar9;
  char *local_200;
  mbstate_t mStack_1f8;
  __locale_t local_1f0 [2];
  char *local_1e0;
  __locale_t local_60;
  undefined8 uStack_58;
  void *local_50;
  __locale_t local_48;
  
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  local_48 = __dataset;
  if (__dataset != (__locale_t)0x0) {
    p_Var5 = uselocale(__dataset);
    local_1f0[0] = p_Var5;
    param_1 = (char *)localeconv();
    if (p_Var5 != (__locale_t)0x0) {
      uselocale(p_Var5);
    }
    uVar6 = FUN_04023e8c(this + 0x10,((lconv *)param_1)->mon_decimal_point,__dataset);
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(this + 0x10) = 0xffffffff;
    }
    uVar6 = FUN_04023e8c(this + 0x14,((lconv *)param_1)->mon_thousands_sep,__dataset);
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(this + 0x14) = 0xffffffff;
    }
    FUN_03fe2dcc(this + 0x18,((lconv *)param_1)->mon_grouping);
    local_200 = ((lconv *)param_1)->currency_symbol;
    mStack_1f8.__count = 0;
    mStack_1f8.__value = (_union_27)0x0;
    p_Var5 = uselocale(__dataset);
    local_60 = p_Var5;
    sVar7 = mbsrtowcs((wchar_t *)local_1f0,&local_200,100,&mStack_1f8);
    if (p_Var5 != (__locale_t)0x0) {
      uselocale(p_Var5);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_0402a8a0;
    FUN_0402d118(this + 0x30,local_1f0,(long)local_1f0 + sVar7 * 4,sVar7);
    uVar1 = 0;
    if ((byte)((lconv *)param_1)->frac_digits != 0xff) {
      uVar1 = (uint)(byte)((lconv *)param_1)->frac_digits;
    }
    *(uint *)(this + 0x78) = uVar1;
    if (((lconv *)param_1)->p_sign_posn == '\0') {
      if (((byte)this[0x48] & 1) == 0) {
        this[0x48] = (moneypunct_byname<wchar_t,false>)0x4;
        pmVar9 = this + 0x4c;
      }
      else {
        pmVar9 = *(moneypunct_byname<wchar_t,false> **)(this + 0x58);
        *(undefined8 *)(this + 0x50) = 2;
      }
      *(undefined4 *)(pmVar9 + 8) = 0;
      *(undefined8 *)pmVar9 = 0x2900000028;
      cVar3 = ((lconv *)param_1)->n_sign_posn;
joined_r0x0402a7a0:
      if (cVar3 == '\0') {
        if (((byte)this[0x60] & 1) == 0) {
          this[0x60] = (moneypunct_byname<wchar_t,false>)0x4;
          pmVar9 = this + 100;
        }
        else {
          pmVar9 = *(moneypunct_byname<wchar_t,false> **)(this + 0x70);
          *(undefined8 *)(this + 0x68) = 2;
        }
        *(undefined4 *)(pmVar9 + 8) = 0;
        *(undefined8 *)pmVar9 = 0x2900000028;
        mVar4 = this[0x30];
joined_r0x0402a7dc:
        if (((byte)mVar4 & 1) == 0) {
          uStack_58 = *(undefined8 *)(this + 0x38);
          local_60 = *(__locale_t *)(this + 0x30);
          local_50 = *(void **)(this + 0x40);
        }
        else {
          FUN_03fe3994(&local_60,*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x38));
        }
        FUN_0402a9b0(this + 0x7c,&local_60,0,((lconv *)param_1)->p_cs_precedes,
                     ((lconv *)param_1)->p_sep_by_space,((lconv *)param_1)->p_sign_posn);
        FUN_0402a9b0(this + 0x80,this + 0x30,0,((lconv *)param_1)->n_cs_precedes,
                     ((lconv *)param_1)->n_sep_by_space,((lconv *)param_1)->n_sign_posn);
        if (((ulong)local_60 & 1) != 0) {
          operator_delete(local_50);
        }
        freelocale(__dataset);
        return;
      }
      local_200 = ((lconv *)param_1)->negative_sign;
      mStack_1f8.__count = 0;
      mStack_1f8.__value = (_union_27)0x0;
      p_Var5 = uselocale(__dataset);
      local_60 = p_Var5;
      sVar7 = mbsrtowcs((wchar_t *)local_1f0,&local_200,100,&mStack_1f8);
      if (p_Var5 != (__locale_t)0x0) {
        uselocale(p_Var5);
      }
      if (sVar7 != 0xffffffffffffffff) {
        FUN_0402d118(this + 0x60,local_1f0,(long)local_1f0 + sVar7 * 4,sVar7);
        mVar4 = this[0x30];
        goto joined_r0x0402a7dc;
      }
    }
    else {
      local_200 = ((lconv *)param_1)->positive_sign;
      mStack_1f8.__count = 0;
      mStack_1f8.__value = (_union_27)0x0;
      p_Var5 = uselocale(__dataset);
      local_60 = p_Var5;
      sVar7 = mbsrtowcs((wchar_t *)local_1f0,&local_200,100,&mStack_1f8);
      if (p_Var5 != (__locale_t)0x0) {
        uselocale(p_Var5);
      }
      if (sVar7 != 0xffffffffffffffff) {
        FUN_0402d118(this + 0x48,local_1f0,(long)local_1f0 + sVar7 * 4,sVar7);
        cVar3 = ((lconv *)param_1)->n_sign_posn;
        goto joined_r0x0402a7a0;
      }
    }
    __throw_runtime_error("locale not supported");
  }
  FUN_03f6321c(&local_60,param_1);
  FUN_0401ca38(local_1f0,"moneypunct_byname failed to construct for ",&local_60);
  pcVar2 = (char *)((ulong)local_1f0 | 1);
  if (((ulong)local_1f0[0] & 1) != 0) {
    pcVar2 = local_1e0;
  }
  __throw_runtime_error(pcVar2);
LAB_0402a8a0:
  uVar8 = __throw_runtime_error("locale not supported");
  if (((ulong)local_1f0[0] & 1) != 0) {
    operator_delete(local_1e0);
  }
  if (((ulong)local_60 & 1) == 0) {
    FUN_04023bc0(&local_48);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar8);
  }
  operator_delete(local_50);
  FUN_04023bc0(&local_48);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar8);
}

