// rea decompile_all
// name: FUN_03f9bef8
// address: 0x3f9bef8
// body: available
// range: 0x3f9bef8-0x3f9c09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f9bf50 to 0x3f984e4 FUN_03f984e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f9bef8(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_x1;
  long lVar9;
  char local_6c [4];
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_1 + 0x52) == '\0') {
    uVar4 = FUN_03f984e4(DAT_09535040,0);
    return uVar4;
  }
  local_60 = param_1;
  uStack_58 = param_2;
  uVar3 = FUN_03f9c0a0(DAT_09535048,&local_60,&local_68);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_03f9adc4(param_1,param_2);
    lVar5 = FUN_03f984e4(DAT_09535040,*(undefined1 *)(param_1 + 0x52));
    if (*(char *)(param_1 + 0x52) != '\0') {
      lVar9 = 0;
      uVar3 = 0;
      do {
        lVar6 = FUN_03f9944c(DAT_09535050);
        uVar7 = FUN_03f9ab74(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar3 * 8));
        FUN_03f5ef9c(lVar6 + 0x18,uVar7);
        FUN_03f5ef9c(lVar6 + 0x28,uVar4);
        lVar8 = FUN_03fadba4(param_1,uVar3 & 0xffffffff);
        if (lVar8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_03f967b4();
        }
        FUN_03f5ef9c(lVar6 + 0x30,uVar7);
        lVar8 = *(long *)(param_1 + 0x30);
        *(int *)(lVar6 + 0x38) = (int)uVar3;
        uVar2 = *(uint *)(*(long *)(lVar8 + uVar3 * 8) + 8);
        uVar1 = uVar2 & 0xffff;
        *(uint *)(lVar6 + 0x10) = uVar1;
        uVar7 = extraout_x1;
        if ((uVar2 >> 0xc & 1) == 0) {
LAB_03f9c00c:
          lVar8 = FUN_03f9c1a4(uVar1,uVar7);
        }
        else {
          local_6c[0] = '\0';
          lVar8 = FUN_03fb5b6c(param_1,uVar3 & 0xffffffff,local_6c);
          if (lVar8 == 0) {
            if (local_6c[0] == '\0') {
              uVar1 = *(uint *)(lVar6 + 0x10);
              uVar7 = 0;
              goto LAB_03f9c00c;
            }
            lVar8 = 0;
          }
        }
        FUN_03f5ef9c(lVar6 + 0x20,lVar8);
        *(long *)(lVar5 + 0x20 + uVar3 * 8) = lVar6;
        FUN_03f5d7b8(lVar5 + 0x20 + lVar9);
        uVar3 = uVar3 + 1;
        lVar9 = lVar9 + 8;
      } while (uVar3 < *(byte *)(param_1 + 0x52));
    }
    local_68 = FUN_03f9c20c(DAT_09535048,&local_60,lVar5);
  }
  return local_68;
}

