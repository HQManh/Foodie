// rea decompile_all
// name: FUN_03f82908
// address: 0x3f82908
// body: available
// range: 0x3f82908-0x3f82b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f82908(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  FUN_0404bf30(1,param_1 + 1);
  uVar10 = *param_1;
  iVar5 = FUN_0404bea0(0,uVar10);
  if (iVar5 == 2) {
    FUN_03fe0300(uVar10,1,0);
  }
  dVar3 = DAT_09749378;
  uVar11 = (ulong)(((double)param_2 * 1000000.0) / DAT_09749378);
  lVar7 = FUN_03fe05d4();
  do {
    FUN_03fe02a8((long)param_1 + 0xc,0,param_2);
    iVar5 = *(int *)((long)param_1 + 0xc);
    while (0 < iVar5) {
      iVar6 = FUN_0404bd00(iVar5,iVar5 + -1,(long)param_1 + 0xc);
      bVar4 = iVar6 == iVar5;
      iVar5 = iVar6;
      if (bVar4) {
        uVar9 = *param_1;
        uVar10 = 0;
        goto LAB_03f82a58;
      }
    }
    lVar8 = FUN_03fe05d4();
    uVar1 = (lVar7 - lVar8) + uVar11;
    uVar2 = 0;
    if (uVar1 <= uVar11) {
      uVar2 = uVar1;
    }
    param_2 = (uint)((dVar3 * (double)uVar2) / 1000000.0);
  } while (param_2 != 0);
  do {
    do {
      iVar5 = *(int *)(param_1 + 1);
      while (0 < iVar5) {
        iVar6 = FUN_0404bcc0(iVar5,iVar5 + -1,param_1 + 1);
        bVar4 = iVar6 == iVar5;
        iVar5 = iVar6;
        if (bVar4) {
          uVar9 = *param_1;
          uVar10 = 0;
          goto LAB_03f82abc;
        }
      }
      sched_yield();
      iVar5 = *(int *)((long)param_1 + 0xc);
    } while (*(int *)((long)param_1 + 0xc) < 1);
    do {
      iVar6 = FUN_0404bd00(iVar5,iVar5 + -1,(long)param_1 + 0xc);
      if (iVar6 == iVar5) {
        uVar9 = *param_1;
        uVar10 = 0;
        goto LAB_03f82b0c;
      }
      iVar5 = iVar6;
    } while (0 < iVar6);
  } while( true );
  while ((int)uVar10 != 2) {
LAB_03f82a58:
    iVar5 = (int)uVar10;
    uVar10 = FUN_0404bd00(uVar10,iVar5 + 1,uVar9);
    if ((int)uVar10 == iVar5) break;
  }
  while ((int)uVar10 != 0) {
    FUN_03fe02a8(uVar9,2,0xffffffff);
    uVar10 = FUN_0404be70(2,uVar9);
  }
  return 1;
  while ((int)uVar10 != 2) {
LAB_03f82abc:
    iVar5 = (int)uVar10;
    uVar10 = FUN_0404bd00(uVar10,iVar5 + 1,uVar9);
    if ((int)uVar10 == iVar5) break;
  }
  while ((int)uVar10 != 0) {
    FUN_03fe02a8(uVar9,2,0xffffffff);
    uVar10 = FUN_0404be70(2,uVar9);
  }
  return uVar10;
  while (iVar6 != 2) {
LAB_03f82b0c:
    iVar5 = (int)uVar10;
    uVar10 = FUN_0404bd00(uVar10,iVar5 + 1,uVar9);
    iVar6 = (int)uVar10;
    if (iVar6 == iVar5) break;
  }
  while (iVar6 != 0) {
    FUN_03fe02a8(uVar9,2,0xffffffff);
    iVar6 = FUN_0404be70(2,uVar9);
  }
  return 1;
}

