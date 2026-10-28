// rea decompile_all
// name: SystemNative_CopyFile
// address: 0x3f85690
// body: available
// range: 0x3f85690-0x3f85857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 SystemNative_CopyFile(uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ssize_t sVar6;
  void *__buf;
  size_t sVar7;
  long lVar8;
  timespec local_e0;
  __time_t _Stack_d0;
  long lStack_c8;
  uint local_b0;
  ulong local_90;
  __time_t local_78;
  long lStack_70;
  __time_t local_68;
  long lStack_60;
  
  uVar4 = FUN_03f8d120();
  if ((uVar4 & 1) != 0) {
    param_1 = (uint *)(ulong)*param_1;
  }
  uVar4 = FUN_03f8d120(param_2);
  if ((uVar4 & 1) != 0) {
    param_2 = (uint *)(ulong)*param_2;
  }
  while( true ) {
    iVar3 = (int)param_1;
    iVar1 = fstat(iVar3,(stat *)&stack0xffffffffffffff40);
    if (-1 < iVar1) break;
    piVar5 = (int *)__errno();
    if (*piVar5 != 4) {
      return 0xffffffff;
    }
  }
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  do {
    iVar1 = (int)param_2;
    iVar2 = fchmod(iVar1,local_b0 & 0x1ff);
    uVar4 = local_90;
    if (-1 < iVar2) break;
    piVar5 = (int *)__errno();
    uVar4 = local_90;
  } while (*piVar5 == 4);
  do {
    if (uVar4 == 0) goto LAB_03f85760;
    sVar7 = uVar4;
    if (0x7ffffffffffffffe < uVar4) {
      sVar7 = 0x7fffffffffffffff;
    }
    sVar6 = sendfile(iVar1,iVar3,(off_t *)0x0,sVar7);
    if (sVar6 < 0) {
      piVar5 = (int *)__errno();
      if ((*piVar5 != 0x26) && (*piVar5 != 0x16)) {
        return 0xffffffff;
      }
      __buf = malloc(0x14000);
      if (__buf == (void *)0x0) {
        return 0xffffffff;
      }
      break;
    }
    uVar4 = uVar4 - sVar6;
  } while( true );
LAB_03f857c4:
  sVar7 = read(iVar3,__buf,0x14000);
  if ((long)sVar7 < 0) goto code_r0x03f857e0;
  goto LAB_03f857ec;
code_r0x03f857e0:
  if (*piVar5 != 4) {
LAB_03f857ec:
    if (sVar7 == 0xffffffffffffffff) {
LAB_03f85840:
      free(__buf);
      return 0xffffffff;
    }
    if (sVar7 == 0) {
      free(__buf);
LAB_03f85760:
      local_e0.tv_nsec = lStack_70;
      local_e0.tv_sec = local_78;
      lStack_c8 = lStack_60;
      _Stack_d0 = local_68;
      do {
        iVar3 = futimens(iVar1,&local_e0);
        if (-1 < iVar3) {
          return 0;
        }
        piVar5 = (int *)__errno();
      } while (*piVar5 == 4);
      return 0;
    }
    if (0 < (long)sVar7) {
      lVar8 = 0;
LAB_03f85804:
      do {
        sVar6 = write(iVar1,(void *)((long)__buf + lVar8),sVar7);
        if (sVar6 < 0) {
          if (*piVar5 == 4) goto LAB_03f85804;
          if (sVar6 == -1) goto LAB_03f85840;
        }
        sVar7 = sVar7 - sVar6;
        lVar8 = sVar6 + lVar8;
      } while (0 < (long)sVar7);
    }
  }
  goto LAB_03f857c4;
}

