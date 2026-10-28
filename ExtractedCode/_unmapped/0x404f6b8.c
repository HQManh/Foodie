// rea decompile_all
// name: FUN_0404f6b8
// address: 0x404f6b8
// body: available
// range: 0x404f6b8-0x404f98b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0404f6b8(long param_1,ulong param_2,long *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  undefined *__src;
  ulong uVar3;
  undefined *__dest;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [16];
  uint local_670;
  
  if (((param_4 == 0) ||
      (uVar3 = FUN_0404fbe0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_0404fda8(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0974b304);
    if (PTR_DAT_09515ae0 < PTR_DAT_09515ae8) {
      plVar4 = (long *)PTR_DAT_09515ae0;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_0404f7c0;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_09515ae8);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_0404f7c0;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_09515ae8);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0974b304);
    goto LAB_0404f808;
  }
LAB_0404f828:
  bVar2 = 1;
LAB_0404f82c:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0404d81c(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  bVar1 = (bool)(bVar2 ^ 1);
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  if (param_4 != 0) {
    bVar1 = true;
  }
  *(long *)(param_1 + 600) = local_6b0;
  *(long *)(param_1 + 0x260) = lVar5;
  if (!bVar1) {
    if (param_3[4] == 0) {
      lVar5 = *param_3;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0974b304);
      __src = PTR_DAT_09515ae0;
      if (PTR_end_09515af0 <= PTR_DAT_09515ae8) {
        __n = (long)PTR_end_09515af0 - (long)PTR_DAT_09515ae0;
        __dest = malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_0974b340) {
          free(__src);
        }
        PTR_end_09515af0 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_09515ae8 = __dest + __n;
        PTR_DAT_09515ae0 = __dest;
      }
      *(long *)PTR_DAT_09515ae8 = lVar5;
      *(long *)((long)PTR_DAT_09515ae8 + 8) = local_698;
      *(long *)((long)PTR_DAT_09515ae8 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_09515ae8 + 0x10) = local_690;
      PTR_DAT_09515ae8 = (undefined *)((long)PTR_DAT_09515ae8 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0974b304);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_0404f7c0:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0974b304);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_0404fbe0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_0404f82c;
  }
LAB_0404f808:
  uVar3 = FUN_0404fbe0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_0404f828;
}

