// rea decompile_all
// name: FUN_03f8c30c
// address: 0x3f8c30c
// body: available
// range: 0x3f8c30c-0x3f8c4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f8c30c(long param_1,int param_2,int param_3,uint *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  socklen_t local_50;
  undefined4 uStack_4c;
  long local_48;
  socklen_t local_3c;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_2 != 0xffff || param_3 != -5) {
    iVar1 = FUN_03f8c0a0(param_2,param_3,(long)&local_38 + 4,&local_38);
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x14) = 0x273a;
      return 0xfffffffd;
    }
    if (param_3 - 0x1005U < 2) {
      local_3c = 0x10;
      iVar1 = getsockopt(*(int *)(param_1 + 4),local_38._4_4_,(int)local_38,&local_50,&local_3c);
      uVar3 = ((int)(SUB168(SEXT816(local_48) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
              (SUB164(SEXT816(local_48) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f)) +
              local_50 * 1000;
    }
    else {
      if (param_3 != -0x81) {
        if (param_3 == 0x80) {
          local_3c = 8;
          iVar1 = getsockopt(*(int *)(param_1 + 4),local_38._4_4_,(int)local_38,&local_50,&local_3c)
          ;
          *param_4 = local_50;
          *param_5 = uStack_4c;
          goto LAB_03f8c460;
        }
        goto LAB_03f8c348;
      }
      local_3c = 8;
      iVar1 = getsockopt(*(int *)(param_1 + 4),local_38._4_4_,(int)local_38,&local_50,&local_3c);
      uVar3 = (uint)(local_50 == 0);
    }
    *param_4 = uVar3;
  }
  else {
    local_38._4_4_ = 1;
    local_38._0_4_ = 2;
    local_38 = 0x100000002;
LAB_03f8c348:
    local_50 = 4;
    iVar1 = getsockopt(*(int *)(param_1 + 4),local_38._4_4_,(int)local_38,param_4,&local_50);
  }
LAB_03f8c460:
  if (iVar1 == -1) {
    FUN_03f8aea4(param_1);
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0;
    if (param_2 == 0xffff && param_3 == -5) {
      *param_4 = (uint)(*param_4 == 0);
    }
  }
  return uVar2;
}

