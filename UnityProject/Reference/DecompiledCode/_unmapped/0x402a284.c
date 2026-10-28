// rea decompile_all
// name: std::__ndk1::moneypunct_byname<char,true>::init
// address: 0x402a284
// body: available
// range: 0x402a284-0x402a4df inclusive
// range: 0x402a4e4-0x402a4f3 inclusive
// range: 0x402a550-0x402a563 inclusive
// range: 0x402a568-0x402a577 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402a560 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x402a574 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::moneypunct_byname<char, true>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<char,true>::init(moneypunct_byname<char,true> *this,char *param_1)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  moneypunct_byname<char,true> mVar4;
  __locale_t __dataset;
  __locale_t __dataset_00;
  lconv *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  byte local_68 [16];
  void *local_58;
  __locale_t local_50;
  undefined8 uStack_48;
  char *local_40;
  __locale_t local_38;
  
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  local_38 = __dataset;
  if (__dataset != (__locale_t)0x0) {
    __dataset_00 = uselocale(__dataset);
    local_50 = __dataset_00;
    plVar5 = localeconv();
    if (__dataset_00 != (__locale_t)0x0) {
      uselocale(__dataset_00);
    }
    uVar6 = FUN_04023adc(this + 0x10,plVar5->mon_decimal_point,__dataset);
    if ((uVar6 & 1) == 0) {
      this[0x10] = (moneypunct_byname<char,true>)0xff;
    }
    uVar6 = FUN_04023adc(this + 0x11,plVar5->mon_thousands_sep,__dataset);
    if ((uVar6 & 1) == 0) {
      this[0x11] = (moneypunct_byname<char,true>)0xff;
    }
    FUN_03fe2dcc(this + 0x18,plVar5->mon_grouping);
    FUN_03fe2dcc(this + 0x30,plVar5->int_curr_symbol);
    uVar1 = 0;
    if ((byte)plVar5->int_frac_digits != 0xff) {
      uVar1 = (uint)(byte)plVar5->int_frac_digits;
    }
    *(uint *)(this + 0x78) = uVar1;
    if (plVar5->int_p_sign_posn == '\0') {
      if (((byte)this[0x48] & 1) == 0) {
        this[0x48] = (moneypunct_byname<char,true>)0x4;
        this[0x4b] = (moneypunct_byname<char,true>)0x0;
        *(undefined2 *)(this + 0x49) = 0x2928;
        cVar3 = plVar5->int_n_sign_posn;
      }
      else {
        puVar8 = *(undefined2 **)(this + 0x58);
        *(undefined8 *)(this + 0x50) = 2;
        *(undefined1 *)(puVar8 + 1) = 0;
        *puVar8 = 0x2928;
        cVar3 = plVar5->int_n_sign_posn;
      }
    }
    else {
      FUN_03fe2dcc(this + 0x48,plVar5->positive_sign);
      cVar3 = plVar5->int_n_sign_posn;
    }
    if (cVar3 == '\0') {
      if (((byte)this[0x60] & 1) == 0) {
        this[0x60] = (moneypunct_byname<char,true>)0x4;
        this[99] = (moneypunct_byname<char,true>)0x0;
        *(undefined2 *)(this + 0x61) = 0x2928;
        mVar4 = this[0x30];
      }
      else {
        puVar8 = *(undefined2 **)(this + 0x70);
        *(undefined8 *)(this + 0x68) = 2;
        *(undefined1 *)(puVar8 + 1) = 0;
        *puVar8 = 0x2928;
        mVar4 = this[0x30];
      }
    }
    else {
      FUN_03fe2dcc(this + 0x60,plVar5->negative_sign);
      mVar4 = this[0x30];
    }
    if (((byte)mVar4 & 1) == 0) {
      uStack_48 = *(undefined8 *)(this + 0x38);
      local_50 = *(__locale_t *)(this + 0x30);
      local_40 = *(char **)(this + 0x40);
    }
    else {
      FUN_03f5d0a4(&local_50,*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x38));
    }
    FUN_04029d50(this + 0x7c,&local_50,1,plVar5->int_p_cs_precedes,plVar5->int_p_sep_by_space,
                 plVar5->int_p_sign_posn);
    FUN_04029d50(this + 0x80,this + 0x30,1,plVar5->int_n_cs_precedes,plVar5->int_n_sep_by_space,
                 plVar5->int_n_sign_posn);
    if (((ulong)local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    freelocale(__dataset);
    return;
  }
  FUN_03f6321c(local_68,param_1);
  FUN_0401ca38(&local_50,"moneypunct_byname failed to construct for ",local_68);
  pcVar2 = (char *)((ulong)&local_50 | 1);
  if (((ulong)local_50 & 1) != 0) {
    pcVar2 = local_40;
  }
  uVar7 = __throw_runtime_error(pcVar2);
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
    FUN_04023bc0(&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar7);
  }
  FUN_04023bc0(&local_38);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar7);
}

