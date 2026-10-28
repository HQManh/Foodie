// rea decompile_all
// name: thunk_FUN_03f8aaec
// address: 0x3f88328
// body: available
// range: 0x3f88328-0x3f8832b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_03f8aaec(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *__cp;
  long lVar1;
  int iVar2;
  ulong uVar3;
  sockaddr *__sa;
  undefined8 uVar4;
  socklen_t __salen;
  byte *pbVar5;
  sockaddr sStack_474;
  char acStack_458 [1024];
  sockaddr sStack_58;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  __cp = param_1 + 1;
  lStack_48 = *(long *)(lVar1 + 0x28);
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  uVar3 = FUN_03f8aa10(pbVar5);
  if ((uVar3 & 1) == 0) {
    pbVar5 = __cp;
    if ((*param_1 & 1) != 0) {
      pbVar5 = *(byte **)(param_1 + 0x10);
    }
    FUN_03f8a590(pbVar5);
  }
  memset(acStack_458,0,0x400);
  pbVar5 = __cp;
  if ((*param_1 & 1) != 0) {
    pbVar5 = *(byte **)(param_1 + 0x10);
  }
  iVar2 = inet_pton(2,(char *)pbVar5,sStack_58.sa_data + 2);
  if (iVar2 < 1) {
    if ((*param_1 & 1) != 0) {
      __cp = *(byte **)(param_1 + 0x10);
    }
    iVar2 = inet_pton(10,(char *)__cp,sStack_474.sa_data + 6);
    if (0 < iVar2) {
      sStack_474.sa_family = 10;
      __sa = &sStack_474;
      __salen = 0x1c;
      goto LAB_03f8abd4;
    }
  }
  else {
    __sa = &sStack_58;
    __salen = 0x10;
    sStack_58.sa_family = 2;
LAB_03f8abd4:
    iVar2 = getnameinfo(__sa,__salen,acStack_458,0x400,(char *)0x0,0,0);
    if (iVar2 == 0) {
      uVar4 = FUN_03f8a6a8(acStack_458,0,param_2,param_4);
      goto LAB_03f8ac08;
    }
  }
  uVar4 = 0xfffffffd;
LAB_03f8ac08:
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

