// rea decompile_all
// name: FUN_03f88ac4
// address: 0x3f88ac4
// body: available
// range: 0x3f88ac4-0x3f88cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03f88ac4(int *param_1,int param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  uVar5 = FUN_03f8a1c0();
  if ((param_3 & 1) != 0) {
    FUN_03f8a05c(uVar5);
  }
  uVar6 = 0;
  do {
    iVar4 = (int)uVar6;
    uVar6 = FUN_0404bd00(uVar6,iVar4 + 1,param_1 + 2);
    iVar2 = (int)uVar6;
    if (iVar2 == iVar4) break;
  } while (iVar2 != 2);
  while (iVar2 != 0) {
    FUN_03fe02a8(param_1 + 2,2,0xffffffff);
    iVar2 = FUN_0404be70(2,param_1 + 2);
  }
  if (param_1[0x18] == 0) {
    if (param_2 == 0) {
      uVar8 = 0xfffffffe;
      goto LAB_03f88cb4;
    }
    iVar4 = param_2;
    if ((param_3 & 1) == 0) {
LAB_03f88bd8:
      do {
        if (*param_1 == param_2) {
          param_1[0x19] = param_1[0x19] + 1;
          FUN_03f88d68(param_1,uVar5);
          param_1[0x19] = param_1[0x19] + -1;
          iVar3 = iVar4;
        }
        else {
          iVar2 = FUN_03f8f488();
          param_1[0x19] = param_1[0x19] + 1;
          uVar7 = FUN_03f88e48(param_1,uVar5,iVar4);
          param_1[0x19] = param_1[0x19] + -1;
          if ((uVar7 & 1) == 0) {
            uVar8 = 0xfffffffe;
            bVar1 = true;
            goto joined_r0x03f88c98;
          }
          iVar3 = FUN_03f8f488();
          iVar2 = (iVar3 - iVar2) / 10000;
          iVar3 = 0;
          if (iVar2 <= iVar4) {
            iVar3 = iVar4 - iVar2;
          }
        }
        if ((param_3 & 1) != 0) {
          FUN_03f8a05c(uVar5);
        }
        iVar4 = iVar3;
      } while (param_1[0x18] == 0);
      bVar1 = false;
      uVar8 = 0;
joined_r0x03f88c98:
      if ((param_3 & 1) != 0) goto LAB_03f88c9c;
    }
    else {
      FUN_03f8a19c(uVar5,param_1);
      FUN_03f8a05c(uVar5);
      if (param_1[0x18] == 0) goto LAB_03f88bd8;
      uVar8 = 0;
      bVar1 = false;
LAB_03f88c9c:
      FUN_03f8a19c(uVar5,0);
      FUN_03f8a05c(uVar5);
    }
    if (bVar1) goto LAB_03f88cb4;
  }
  iVar4 = param_1[1];
  if (iVar4 == 0) {
LAB_03f88b5c:
    uVar8 = 0;
    param_1[0x18] = 0;
  }
  else {
    if (iVar4 == 3) {
      if (param_1[0x18] != 0) {
        uVar8 = 0;
        iVar4 = param_1[0x18] + -1;
        param_1[0x18] = iVar4;
        if ((iVar4 == 0) || (param_1[0x19] == 0)) goto LAB_03f88cb4;
        FUN_03f89104(param_1,1);
      }
    }
    else if (iVar4 == 2) goto LAB_03f88b5c;
    uVar8 = 0;
  }
LAB_03f88cb4:
  iVar4 = FUN_0404bea0(0,param_1 + 2);
  if (iVar4 == 2) {
    FUN_03fe0300(param_1 + 2,1,0);
  }
  return uVar8;
}

