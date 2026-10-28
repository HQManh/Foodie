// rea decompile_all
// name: FUN_03f8be40
// address: 0x3f8be40
// body: available
// range: 0x3f8be40-0x3f8bf5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8bebc to 0x3f91760 FUN_03f91760 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8be40(undefined4 *param_1,long param_2,undefined8 *param_3,undefined4 param_4,
                 uint param_5,undefined8 param_6,int param_7,uint param_8,undefined8 param_9,
                 undefined4 *param_10)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int local_44;
  undefined2 local_40;
  uint6 uStack_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uStack_30 = param_3[1];
  local_38 = *param_3;
  _local_40 = CONCAT62((uint6)(ushort)((ushort)(param_5 >> 8) & 0xff |
                                      (ushort)((param_5 & 0xff00ff) << 8)),10);
  local_44 = 0x1c;
  local_28 = param_4;
  if (param_8 == 0) {
    uVar3 = 0;
  }
  else {
    if ((param_8 & 0xffff7fe8) != 0) {
      *param_1 = 0xfffffffd;
      *(undefined4 *)(param_2 + 0x14) = 0x273d;
      FUN_03f91760(param_1 + 2);
      return;
    }
    uVar3 = param_8 & 7;
    if (0x7fff < param_8) {
      uVar3 = param_8 & 7 | 0x8000;
    }
  }
  iVar1 = FUN_03f8b864(param_2,param_6,(long)param_7,uVar3,param_9,&local_40,&local_44);
  if (iVar1 == 0) {
    if ((local_44 == 0) || (uVar2 = FUN_03f8b454(&local_40,local_44,param_10), (uVar2 & 1) != 0)) {
      *param_1 = 0;
    }
    else {
      *param_10 = 0xffffffff;
      *(undefined4 *)(param_2 + 0x14) = 0x273f;
      *param_1 = 0xfffffffd;
    }
  }
  else {
    *param_10 = 0xffffffff;
    *param_1 = 0xfffffffd;
  }
  FUN_03f91760(param_1 + 2);
  return;
}

