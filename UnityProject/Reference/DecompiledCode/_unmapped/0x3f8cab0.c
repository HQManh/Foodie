// rea decompile_all
// name: FUN_03f8cab0
// address: 0x3f8cab0
// body: available
// range: 0x3f8cab0-0x3f8ccdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8ccdc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_03f8cab0(ulong param_1,int *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint __domain;
  uint __fd;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  char cVar9;
  void *__dest;
  char *pcVar10;
  undefined8 local_a0;
  char *local_98;
  char acStack_90 [16];
  ushort local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  __domain = (uint)param_1;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_2 = 0;
  uVar6 = 4;
  if (__domain != 2) {
    uVar6 = (uint)(__domain == 10) << 4;
  }
  if (uVar6 != 0) {
    __fd = socket(__domain,1,0);
    param_1 = (ulong)__fd;
    if (__fd != 0xffffffff) {
      local_98 = (char *)0x0;
      local_a0 = 0x400;
      local_98 = malloc(0x400);
      iVar4 = ioctl(__fd,0x8912,&local_a0);
      if (iVar4 < 0) {
        iVar4 = 0;
        pvVar7 = (void *)0x0;
        pcVar8 = local_98;
      }
      else {
        if (local_98 < local_98 + (int)local_a0) {
          bVar2 = 0;
          iVar4 = 0;
          pcVar8 = local_98;
          do {
            if (*(ushort *)(pcVar8 + 0x10) == __domain) {
              strcpy(acStack_90,pcVar8);
              iVar5 = ioctl(__fd,0x8913,acStack_90);
              if ((iVar5 < 0) || ((local_80 & 1) == 0)) goto LAB_03f8cb98;
              bVar3 = (local_80 & 8) == 0;
              iVar4 = iVar4 + 1;
              cVar9 = '\x01';
              if (!bVar3) {
                cVar9 = '\x02';
              }
              bVar2 = bVar3 | bVar2;
              *pcVar8 = cVar9;
            }
            else {
LAB_03f8cb98:
              *pcVar8 = '\0';
            }
            pcVar8 = pcVar8 + 0x28;
            iVar5 = (int)local_a0;
          } while (pcVar8 < local_98 + (int)local_a0);
        }
        else {
          iVar4 = 0;
          bVar2 = 0;
          iVar5 = (int)local_a0;
        }
        pcVar8 = local_98;
        pvVar7 = malloc((long)(int)(iVar4 * uVar6));
        __dest = pvVar7;
        pcVar10 = pcVar8;
        if (pcVar8 < pcVar8 + iVar5) {
          do {
            if (*pcVar10 != '\0') {
              if ((bool)(*pcVar10 != '\x02' | bVar2 ^ 1)) {
                if (*(short *)(pcVar10 + 0x10) == 10) {
                  pcVar8 = pcVar10 + 0x18;
                }
                else if (*(short *)(pcVar10 + 0x10) == 2) {
                  pcVar8 = pcVar10 + 0x14;
                }
                else {
                  pcVar8 = (char *)0x0;
                }
                memcpy(__dest,pcVar8,(ulong)uVar6);
                __dest = (void *)((long)__dest + (ulong)uVar6);
                pcVar8 = local_98;
                iVar5 = (int)local_a0;
              }
              else {
                iVar4 = iVar4 + -1;
              }
            }
            pcVar10 = pcVar10 + 0x28;
          } while (pcVar10 < pcVar8 + iVar5);
        }
      }
      *param_2 = iVar4;
      free(pcVar8);
      uVar6 = close(__fd);
      param_1 = (ulong)uVar6;
      goto LAB_03f8cca8;
    }
  }
  pvVar7 = (void *)0x0;
LAB_03f8cca8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return pvVar7;
}

