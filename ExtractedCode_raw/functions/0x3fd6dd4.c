// rea decompile_all
// name: FUN_03fd6dd4
// address: 0x3fd6dd4
// body: available
// range: 0x3fd6dd4-0x3fd6fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd6f58 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd6fd0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd6ff8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd6ffc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd6dd4(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ssize_t sVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  byte abStack_1038 [4096];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = open("/proc/self/stat",0);
  uVar6 = (ulong)uVar4;
  if ((int)uVar4 < 0) {
    if (*(long *)(lVar3 + 0x28) == local_38) {
      (*(code *)PTR_FUN_09515620)("Couldn\'t read /proc/self/stat");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    sVar5 = read(uVar4,abStack_1038,0x1000);
    uVar4 = close(uVar4);
    uVar6 = (ulong)uVar4;
    uVar4 = (uint)sVar5;
    uVar10 = (ulong)(int)uVar4;
    iVar8 = 0;
    uVar7 = 0;
    do {
      uVar11 = (uint)uVar7;
      uVar7 = (ulong)(int)uVar11;
      if ((int)uVar11 <= (int)uVar4) {
        uVar11 = uVar4;
      }
      uVar2 = uVar7;
      if ((long)uVar7 <= (long)uVar10) {
        uVar2 = uVar10;
      }
      do {
        if (uVar2 == uVar7) goto LAB_03fd6e7c;
        pbVar9 = abStack_1038 + uVar7;
        uVar7 = uVar7 + 1;
      } while ((*pbVar9 == 0x20) || (0xfffffffa < *pbVar9 - 0xe));
      uVar11 = (uint)uVar7;
LAB_03fd6e7c:
      uVar7 = (ulong)(int)uVar11;
      if ((int)uVar11 <= (int)uVar4) {
        uVar11 = uVar4;
      }
      uVar2 = uVar7;
      if ((long)uVar7 <= (long)uVar10) {
        uVar2 = uVar10;
      }
      while (uVar2 != uVar7) {
        pbVar9 = abStack_1038 + uVar7;
        uVar7 = uVar7 + 1;
        if ((*pbVar9 == 0x20) || (0xfffffffa < *pbVar9 - 0xe)) goto LAB_03fd6ec0;
      }
      uVar7 = (ulong)uVar11;
LAB_03fd6ec0:
      uVar11 = (uint)uVar7;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x1b);
    if ((int)uVar11 < (int)uVar4) {
      pbVar9 = abStack_1038 + (int)uVar11;
      do {
        uVar11 = (uint)uVar7;
        if ((*pbVar9 != 0x20) && (*pbVar9 - 0xe < 0xfffffffb)) goto LAB_03fd6f04;
        uVar7 = (ulong)(uVar11 + 1);
        pbVar9 = pbVar9 + 1;
      } while (uVar4 != uVar11 + 1);
    }
    else {
LAB_03fd6f04:
      uVar1 = uVar11;
      if ((int)uVar11 < (int)uVar4) {
        do {
          if (abStack_1038[(int)uVar1] - 0x3a < 0xfffffff6) {
            abStack_1038[(int)uVar1] = 0;
            uVar6 = strtoul((char *)(abStack_1038 + (int)uVar11),(char **)0x0,10);
            if ((uVar6 < 0x100000) || ((uVar6 & 7) != 0)) {
              if (*(long *)(lVar3 + 0x28) == local_38) {
                (*(code *)PTR_FUN_09515620)("Absurd stack bottom value");
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            else if (*(long *)(lVar3 + 0x28) == local_38) {
              return;
            }
            goto LAB_03fd6ffc;
          }
          uVar1 = uVar1 + 1;
        } while (uVar4 != uVar1);
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      (*(code *)PTR_FUN_09515620)("Could not parse /proc/self/stat");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_03fd6ffc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

