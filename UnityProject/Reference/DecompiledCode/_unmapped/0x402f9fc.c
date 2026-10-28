// rea decompile_all
// name: __dynamic_cast
// address: 0x402f9fc
// body: available
// range: 0x402f9fc-0x402fbe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __dynamic_cast(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  lVar3 = *(long *)(*param_1 + -0x10);
  plVar1 = *(long **)(*param_1 + -8);
  lVar4 = (long)param_1 + lVar3;
  lStack_78 = param_4;
  if (plVar1[1] == param_3[1]) {
    if (param_4 < 0) {
      if (param_4 == -2) goto LAB_0402fb68;
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 1;
      uStack_44 = 0;
      uStack_42 = 0;
      lStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = 0;
      local_90 = param_3;
      plStack_88 = param_1;
      local_80 = (long *)param_2;
      (**(code **)(*param_3 + 0x28))(param_3,&local_90,lVar4,lVar4,1,0);
      bVar2 = (int)local_60 == 1;
    }
    else {
      bVar2 = param_4 + lVar3 == 0;
    }
    if (!bVar2) {
      lVar4 = 0;
    }
  }
  else {
    if ((-1 < param_4) && (lVar3 = (long)param_1 - param_4, lVar4 <= lVar3)) {
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 1;
      lStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = 0;
      uStack_44 = 0;
      uStack_42 = 0;
      local_90 = plVar1;
      plStack_88 = (long *)lVar3;
      local_80 = param_3;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_90,lVar4,lVar4,1,0);
      if ((int)local_60 != 0) {
        return lVar3;
      }
    }
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_42 = 0;
    iStack_50 = 0;
    uStack_4c = 0;
    lStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_54 = 0;
    local_60 = 0;
    local_90 = param_3;
    plStack_88 = param_1;
    local_80 = (long *)param_2;
    lStack_78 = param_4;
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_90,lVar4,1,0);
    if (local_54 == 1) {
      if ((int)local_60 != 1) {
        if (iStack_50 != 0) {
          return 0;
        }
        if (local_60._4_4_ != 1) {
          return 0;
        }
        if (local_58 != 1) {
          return 0;
        }
      }
      return local_70;
    }
    if (local_54 == 0) {
      if ((local_58 == 1 && local_60._4_4_ == 1) && iStack_50 == 1) {
        return lStack_68;
      }
      return 0;
    }
LAB_0402fb68:
    lVar4 = 0;
  }
  return lVar4;
}

