// rea decompile_all
// name: FUN_03faef78
// address: 0x3faef78
// body: available
// range: 0x3faef78-0x3faf2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3faf2c0 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03faef78(void)

{
  long *plVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  pthread_t pVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_88 [8];
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  void *local_50;
  void *local_48;
  
  local_48 = (void *)0x0;
  local_50 = pthread_getspecific(*DAT_095352e0);
  pVar5 = pthread_self();
  if (pVar5 == DAT_095352b8) {
    DAT_095352c0 = DAT_095352c0 + 1;
    pVar5 = DAT_095352b8;
  }
  else {
    uVar6 = 0;
    do {
      iVar4 = (int)uVar6;
      uVar6 = FUN_0404bd00(uVar6,iVar4 + 1,&DAT_09535278);
      iVar3 = (int)uVar6;
      if (iVar3 == iVar4) break;
    } while (iVar3 != 2);
    while (iVar3 != 0) {
      FUN_03fe02a8(&DAT_09535278,2,0xffffffff);
      iVar3 = FUN_0404be70(2,&DAT_09535278);
    }
  }
  DAT_095352b8 = pVar5;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  DAT_09535300 = 1;
  FUN_03fb3eb0(&local_68,*DAT_095352f8,DAT_095352f8[1],DAT_095352f8[1] - *DAT_095352f8 >> 3);
  FUN_03f5d7b8(local_68,local_60 - local_68);
  if (DAT_095352c0 == 0) {
    DAT_095352b8 = 0;
    iVar4 = FUN_0404bea0(0);
    if (iVar4 == 2) {
      FUN_03fe0300(&DAT_09535278,1,0);
    }
  }
  else {
    DAT_095352c0 = DAT_095352c0 + -1;
  }
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  if (local_60 != local_68) {
    do {
      pvVar11 = *(void **)(local_60 + -8);
      lVar10 = *(long *)(*(long *)((long)pvVar11 + 0x10) + 0x18);
      uVar7 = FUN_03f5e828(pvVar11);
      pvVar2 = pvVar11;
      if (((uVar7 & 1) == 0) && (pvVar2 = local_48, pvVar11 != local_50)) {
        FUN_03f870a4(lVar10,FUN_03faf318,0);
        if (local_78 < local_70) {
          *local_78 = lVar10;
          local_78 = local_78 + 1;
          pvVar2 = local_48;
        }
        else {
          lVar12 = (long)local_78 - (long)local_80 >> 3;
          uVar7 = lVar12 + 1;
          if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5fa4c(&local_80);
          }
          uVar9 = (long)local_70 - (long)local_80 >> 2;
          if (uVar9 <= uVar7) {
            uVar9 = uVar7;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            auVar14 = ZEXT816(0);
          }
          else {
            auVar14 = FUN_03f695c0(&local_70);
          }
          plVar8 = (long *)(auVar14._0_8_ + lVar12 * 8);
          plVar13 = plVar8 + 1;
          *plVar8 = lVar10;
          plVar1 = local_78;
          while (local_78 != local_80) {
            local_78 = local_78 + -1;
            plVar8 = plVar8 + -1;
            *plVar8 = *local_78;
            plVar1 = local_80;
          }
          local_70 = (long *)(auVar14._0_8_ + auVar14._8_8_ * 8);
          local_80 = plVar8;
          local_78 = plVar13;
          pvVar2 = local_48;
          if (plVar1 != (long *)0x0) {
            operator_delete(plVar1);
            local_78 = plVar13;
            pvVar2 = local_48;
          }
        }
      }
      local_48 = pvVar2;
      local_60 = local_60 + -8;
    } while (local_60 != local_68);
  }
  FUN_03f5d7b8(local_60,0);
  if (local_78 != local_80) {
    do {
      lVar10 = local_78[-1];
      iVar4 = FUN_03f87080(lVar10,10);
      if (iVar4 == 0) {
        local_78 = local_78 + -1;
      }
      else {
        FUN_03f870a4(lVar10,FUN_03faf318,0);
      }
    } while (local_78 != local_80);
  }
  FUN_03f5d894(auStack_88,&DAT_09535278);
  plVar8 = DAT_095352f8;
  DAT_095352f8[1] = *DAT_095352f8;
  if (local_48 != (void *)0x0) {
    FUN_03faf334(plVar8,&local_48);
    plVar8 = DAT_095352f8;
  }
  if (local_50 != (void *)0x0) {
    FUN_03faf334(plVar8,&local_50);
    plVar8 = DAT_095352f8;
  }
  FUN_03f5d7b8(*plVar8,plVar8[1] - *plVar8);
  FUN_03f5d920(auStack_88);
  if (local_80 != (long *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  local_80 = &local_68;
  FUN_03fb3e8c(&local_80);
  return;
}

