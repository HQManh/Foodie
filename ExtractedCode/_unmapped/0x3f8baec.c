// rea decompile_all
// name: FUN_03f8baec
// address: 0x3f8baec
// body: available
// range: 0x3f8baec-0x3f8bc27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f8baec(long param_1,long param_2,uint param_3,int *param_4,uint param_5)

{
  ulong uVar1;
  int *piVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  ulong uVar5;
  size_t *psVar6;
  ulong *puVar7;
  void *pvVar8;
  uint __flags;
  int iVar9;
  msghdr local_70;
  
  if (param_5 == 0) {
    __flags = 0;
  }
  else {
    if ((param_5 & 0xffff7fe8) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x273d;
      return 0xfffffffd;
    }
    __flags = param_5 & 7;
    if (0x7fff < param_5) {
      __flags = param_5 & 7 | 0x8000;
    }
  }
  local_70.msg_iovlen = (size_t)(int)param_3;
  local_70.msg_flags = 0;
  local_70._52_4_ = 0;
  local_70.msg_iov = (iovec *)0x0;
  local_70.msg_controllen = 0;
  local_70.msg_control = (void *)0x0;
  local_70.msg_namelen = 0;
  local_70._12_4_ = 0;
  local_70.msg_name = (void *)0x0;
  local_70.msg_iov = malloc(-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4);
  if (0 < (int)param_3) {
    uVar5 = (ulong)param_3;
    psVar6 = &(local_70.msg_iov)->iov_len;
    puVar7 = (ulong *)(param_2 + 8);
    do {
      pvVar8 = (void *)*puVar7;
      uVar1 = puVar7[-1];
      uVar5 = uVar5 - 1;
      puVar7 = puVar7 + 2;
      ((iovec *)(psVar6 + -1))->iov_base = pvVar8;
      *psVar6 = (ulong)(uint)uVar1;
      psVar6 = psVar6 + 2;
    } while (uVar5 != 0);
  }
  do {
    sVar3 = recvmsg(*(int *)(param_1 + 4),&local_70,__flags);
    iVar9 = (int)sVar3;
    if (iVar9 != -1) {
      if ((iVar9 != 0) || (*(int *)(param_1 + 0x18) == 1)) {
        free(local_70.msg_iov);
        *param_4 = iVar9;
        return 0;
      }
      puVar4 = (undefined4 *)__errno();
      *puVar4 = 4;
      break;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  free(local_70.msg_iov);
  *param_4 = 0;
  FUN_03f8aea4(param_1);
  return 0xfffffffd;
}

