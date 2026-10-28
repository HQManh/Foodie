// rea decompile_all
// name: FUN_03f87528
// address: 0x3f87528
// body: available
// range: 0x3f87528-0x3f8778f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f87528(long param_1)

{
  short *psVar1;
  short *psVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  short *psVar9;
  short *psVar10;
  ulong uVar11;
  byte local_80 [8];
  ulong local_78;
  short *psStack_70;
  long *local_68;
  
  if (DAT_09534a00 == (long *)0x0) {
    __android_log_print(4,"IL2CPP","Java VM not initialized");
  }
  else if (param_1 != 0) {
    local_68 = (long *)0x0;
    iVar5 = (**(code **)(*DAT_09534a00 + 0x30))(DAT_09534a00,&local_68,0x10002);
    if (iVar5 == -2) {
      (**(code **)(*DAT_09534a00 + 0x20))(DAT_09534a00,&local_68,0);
    }
    (**(code **)(*local_68 + 0x88))();
    lVar6 = (**(code **)(*local_68 + 0x30))(local_68,"java/lang/System");
    if ((lVar6 != 0) &&
       (lVar7 = (**(code **)(*local_68 + 0x388))
                          (local_68,lVar6,"loadLibrary","(Ljava/lang/String;)V"), lVar7 != 0)) {
      uVar8 = (**(code **)(*local_68 + 0x538))(local_68,param_1);
      FUN_03f87c50(local_68,lVar6,lVar7,uVar8);
      cVar4 = (**(code **)(*local_68 + 0x720))();
      if (cVar4 != '\0') {
        (**(code **)(*local_68 + 0x88))();
        FUN_03f6321c(local_80,param_1);
        bVar3 = (local_80[0] & 1) != 0;
        uVar11 = (ulong)(local_80[0] >> 1);
        if (bVar3) {
          uVar11 = local_78;
        }
        psVar2 = (short *)((ulong)local_80 | 1);
        if (bVar3) {
          psVar2 = psStack_70;
        }
        psVar1 = (short *)((long)psVar2 + uVar11);
        psVar9 = psVar2;
        while (((psVar10 = psVar1, 2 < (long)uVar11 &&
                (psVar9 = memchr(psVar9,0x6c,uVar11 - 2), psVar9 != (short *)0x0)) &&
               (psVar10 = psVar9, *psVar9 != 0x696c || (char)psVar9[1] != 'b'))) {
          psVar9 = (short *)((long)psVar9 + 1);
          uVar11 = (long)psVar1 - (long)psVar9;
        }
        if ((local_80[0] & 1) != 0) {
          operator_delete(psStack_70);
        }
        if (psVar10 != psVar1 && psVar10 == psVar2) {
          uVar8 = (**(code **)(*local_68 + 0x538))(local_68,param_1 + 3);
          FUN_03f87c50(local_68,lVar6,lVar7,uVar8);
        }
      }
    }
    cVar4 = (**(code **)(*local_68 + 0x720))();
    if (cVar4 != '\0') {
      (**(code **)(*local_68 + 0x88))();
    }
    if (iVar5 == -2) {
      (**(code **)(*DAT_09534a00 + 0x28))();
    }
  }
  return param_1;
}

